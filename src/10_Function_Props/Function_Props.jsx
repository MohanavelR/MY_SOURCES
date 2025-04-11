import React from 'react'
import Props_Types from 'prop-types'
export const Function_Props = ({fun,click}) => {
  return (
    <div>
        
     {fun()}
     <button onClick={click}>click</button>
    </div>
  )
}
Function_Props.Props_Types={
  click:Props_Types.func.isRequired
}

