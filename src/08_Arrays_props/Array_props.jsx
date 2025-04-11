import React from 'react'
import { Table } from './Table'
export const Array_props = () => {
    let details=[
        {id:1,name:'Mohan', age:21 ,ismarried:false },
        {id:2,name:'Jegan' ,age:21 ,ismarried:false },
        {id:3,name:'Karthick' ,age:21 ,ismarried:false},
        {id:4,name:'Bala', age:24, ismarried:false},
        {id:5,name:'Selvakumar', age:21, ismarried:false}
    ]
  return (
    <div className='table-container-arrays'>
    
       <Table details={details}/>
       
    </div>
  )
}
