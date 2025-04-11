import React from 'react'
import { Table } from './Table'

export const Props = () => {
  return (
    <>
    <div className='table-container-props'>
    <Table name='Mohan' age={21} ismarried={false} />
    <Table name='Jegan' age={21} ismarried={false} />
    <Table name='Selvakumar' age={21} ismarried={false} />
    <Table name='Karthick' age={21} ismarried={false} />
    <Table name='Bala' age={24} ismarried={false} />
    
    </div>
    <p>Send datases to child components</p>
    <pre>
    &lt; ComponentName  destruture-name=value ....   /&gt;
    </pre>
    <h4>Destructure in Child Components</h4>
    <pre>
      function  (props(any name))
      access in values - props.destruture-name
    </pre>
    <hr />
    </>
  )
}
