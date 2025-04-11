import React from 'react'
import { Table } from './Table'

export const PropsTypes_default = () => {
  return (
     <>
        <div className='table-container-props-default'>
        <Table name='Mohan' age={21} ismarried={false} />
        <Table name='Jegan' age={21} ismarried={false} />
        <Table name='Selvakumar' age={21} ismarried={false} />
        <Table name='Karthick' age={21} ismarried={false} />
        <Table name='Bala' age={24} ismarried={false} />
        <Table/>
        
        </div>
        <p>Default props values set</p>
        <pre>
        Table.defaultProps=object-
              name:"No name",
               age:0,
              ismarried:false

          
        </pre>
        <hr />
        </>
  )
}
