import React from 'react'
import { useState } from 'react'

export const Use_State = () => {
    const[count,setConut]=useState(0)

  return (
    <div>
         <p>usestates is return two value one value and setter method</p>
         <p>Use State Value :{count}</p>
         <button onClick={()=>setConut(count+1)}>click</button>
    </div>
  )
}
