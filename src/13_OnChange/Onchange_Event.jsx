import React from 'react'
import { useState } from 'react'
export const Onchange_Event = () => {
    const[para,setPara]=useState("Enter Words")
  return (
    <div>
        <p>When You are change input field this Called</p>
        <p>onChange key word</p>
        <textarea onChange={(e)=>{
          setPara(e.target.value)
           console.log(e.target.value)
          }} value={para}/>
        <p>{para}</p>
    </div>
  )
}
