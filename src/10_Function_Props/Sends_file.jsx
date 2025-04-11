import React from 'react'
import { Function_Props } from './Function_Props'

export const Sends_file = () => {
    function Send(){
        return <p>This Function Props</p>
    }
    function Click(){
        alert("You was Clicked.") 
    }
  return (
      <div>
        <Function_Props  fun={Send} click={Click}/>

    </div>
  )
}
