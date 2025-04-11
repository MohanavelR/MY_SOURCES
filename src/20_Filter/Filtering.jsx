import React, { useState } from 'react'
import Card from './Card'
import './sort.css'
const Filtering = () => {
    const[search,setSearch]=useState("")
    const product=[{
    id:1,
    product_name:"OPPO",
    price:12999,
    quitity:3
    },
{    
    id:2,
    product_name:"vivo",
    price:11999,
    quitity:2
},
   { 
    id:3,
    product_name:"Headphones",
    price:1999,
    quitity:3
}, { 
    id:4,
    product_name:"Speaker",
    price:2999,
    quitity:4
} ,{ 
    id:5,
    product_name:"Water Bottle",
    price:99,
    quitity:3
} ,{ 
    id:6,
    product_name:"Redmi",
    price:11999,
    quitity:3
}]
product.sort((x,y)=>x.price-y.price)
let filterdata=product.filter(a=>a.product_name.toLowerCase().includes(search.toLowerCase()))
  return (
    <>
     <input className='filter-input' autoFocus onChange={(e)=> setSearch(e.target.value)} type="text" placeholder='Search' />
    <div className='product-container-2'>
          {/* <Card/>       */}
          
        {(filterdata).map(a=><Card key={a.id} product={a} />)}
    </div>
    </>
  )
}

export default Filtering
