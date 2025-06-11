// let message = document.getElementById('message')

let message=document.getElementById("message")
if (message){
    setTimeout(()=>{
        message.style.display ='none'
        console.log(message.style.display)
    },2000)
}