import React from 'react'
import { useState } from 'react'
import { useEffect } from 'react'


export const Use_Effect = () => {
    const[count,setcount]=useState(0)
    const[count2,setcount2]=useState(0)
    const[list,setlist]=useState(["list-1","list-2","list-3"])
useEffect(() => {
        console.log(" I am render and when You are click and change , I am Running...")
})
useEffect(() => {
    console.log("I am render and You had Created count variable change count I am Running...")
}, [count])
useEffect(() => {
    console.log("I am Running only page render..")
}, [])
    return (
    <div>Use Effect
    <p>Count : {count}</p>
    <button onClick={()=>setcount(count+1)}>Count</button>
    <button onClick={()=>setcount2(count2+1)}>Click</button>
    {list.map((a,index)=><p key={index}>{a}</p>)}
    <p>Open browser Console</p>
    </div>
    
  )
}
