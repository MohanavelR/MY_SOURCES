import React from 'react'


const Card = ({product}) => {
  return (
    <div className='card'>
         <div className='img'>
            <img src="" alt="" />
         </div>
         <div className='details'>
            <div className='product-name'>
            <p>{product.product_name}</p>
             <p>{product.price}</p>
            </div>
            <p>Quitity:<span>{product.quitity}</span></p>
         </div>
    </div>
  )
}

export default Card
