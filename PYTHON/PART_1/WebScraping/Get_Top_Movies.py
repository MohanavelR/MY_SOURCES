from bs4 import BeautifulSoup
import openpyxl.workbook
import requests,openpyxl
# requests is http requests handle
# openpyxl is access xl file 
# create xl file
excel=openpyxl.Workbook()
sheet=excel.active
sheet.title="Movies List"
sheet.append(['Rank','Movie Name','Year Of Release','IMDB Rating'])
try :
    print("Loading .....")
    headers = {
    "User-Agent": "Mozilla/5.0 "
}
    get_response=requests.get('https://www.imdb.com/chart/top/',headers=headers)
    get_data=BeautifulSoup(get_response.text,'html.parser')
    # print(get_data)
    movies = get_data.find('ul',class_="ipc-metadata-list").find_all('li')
    ratings = get_data.select('td.imdbRating strong')
    for movie in movies :
        movie_list=(movie.find('div',class_='ipc-title').find('h3',class_='ipc-title__text').text).split('.')
        movie_name=movie_list[1]
        movie_rank=movie_list[0]
        movie_rate=movie.find('div',class_='cli-ratings-container').find('span',class_='ipc-rating-star').find('span',class_='ipc-rating-star--rating').text
        movie_year= movie.find("div",class_="ipc-metadata-list-summary-item__c").find('div',class_='cli-children').find('div',class_='cli-title-metadata').span.text
        # print(movie_name.split('.'))
        # print(movie_rank,":",movie_name,":",movie_rate,':',movie_year)
        # sheet.append([movie_rank,movie_name,movie_year,movie_rate]) 
        
except Exception as e: 
   print('Error :',str(e))
   exit(0)
print("Successfully Added")   
excel.save('Movies_List.xlsx')