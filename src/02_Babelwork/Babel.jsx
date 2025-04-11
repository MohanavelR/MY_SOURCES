import React from "react"

export const Babel = () => {
  return (    
    <>
    <div className="babel">
    <h1>With Babel :</h1>
    <div>
        <h1>Hi Hello</h1>
        <p>This Very Easy to Write</p>
    </div>
    <hr />
    {/* ----------------------------------------------- */}
    <h1>WithOut Babel: </h1>
    {React.createElement('div',null,
     React.createElement('h1',{className:"class"},'Hi hello'),
     React.createElement('p',null,'This Very Hard to Write'),
     React.createElement('hr',null)
     )}
     {/* ----------------------------------------------- */}
     
    </div>
    <hr />
    </>
  )
}
