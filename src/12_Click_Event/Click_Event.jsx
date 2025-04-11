import React from 'react'
import { useState } from 'react'

export const Click_Event = () => {
    const[para,setPara]=useState("Click button")
    let click="Click button";
    function ClickHandle(){
      setPara("You Were Clicked.")
      click="You Were Clicked."
      console.log("With State   :",para)
      console.log("Without State:",click) 
    }
  return (
    <div>
        <p>Click Event is Call any function</p>
        <p>onClick key word</p>
        <button style={
          {
          padding:"7px",
          backgroundColor:"red",
          color:"white",
          fontWeight:"bold",
          border:"0px",
          width:"100px",
          borderRadius:"5px"
          }
          } onClick={ClickHandle}>Click</button>
        <p>{para}</p>
        <p>{click}</p>
    </div>
  )
}
