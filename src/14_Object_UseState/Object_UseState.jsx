import React from 'react'
import { useState } from 'react'

export const Object_UseState = () => {
    const [obj,setObj]=useState({name:"Mohan",age:45})
  return (
    <>
    <p>Name :{obj.name}</p>
    <p>Age  :{obj.age}</p>
    </>
    
  )
}
