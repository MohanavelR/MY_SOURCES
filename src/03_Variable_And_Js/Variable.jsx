import React from 'react'

export const Variable = () => {
    let count=5
    let login=true
    let list=['item 1','item 2','item 3']
  return (
    <>
    <div className='variable'>
       <p>js Expression: 23+45={23+45}</p>
       <p>Variable count : {count}</p>
       <b>Sytle : <span style={{color:'blue'}}>Color Blue</span></b>
       <p>Condition Render :{login?<b style={{color:'green'}}>Login successfully</b>:<b style={{color:'red'}}>Login Failed</b>}</p>
       <h1>List:</h1>
       <ul>
         {list.map((e,i)=>(
        <li key={i}>{e}</li>
        )
             )}
       </ul>
       
    </div>
    <hr />
    </>
  )
}
