void func_00139e28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00139e28: addiu $sp, $sp, -0x10
    return func_00139e28();  // Tail call                        // 0x00139e34: j 0x139d48
    sp = sp + 0x10;                                             // 0x00139e38: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00139e3c: nop 
    sp = sp + -0x10;                                            // 0x00139e40: addiu $sp, $sp, -0x10
    if (a0 == 0) goto label_0x139ef8;                           // 0x00139e4c: beqz $a0, 0x139ef8
    v0 = 0xcb;                                                  // 0x00139e54: addiu $v0, $zero, 0xcb
    if (a1 == v0) goto label_0x139ee0;                          // 0x00139e58: beq $a1, $v0, 0x139ee0
    v0 = (a1 < 0xcc) ? 1 : 0;                                   // 0x00139e5c: slti $v0, $a1, 0xcc
    if (v0 == 0) goto label_0x139e90;                           // 0x00139e60: beqz $v0, 0x139e90
    v0 = 0xcd;                                                  // 0x00139e64: addiu $v0, $zero, 0xcd
    v0 = 0xc9;                                                  // 0x00139e68: addiu $v0, $zero, 0xc9
    if (a1 == v0) goto label_0x139ec0;                          // 0x00139e6c: beq $a1, $v0, 0x139ec0
    v0 = (a1 < 0xca) ? 1 : 0;                                   // 0x00139e70: slti $v0, $a1, 0xca
    if (v0 == 0) goto label_0x139ed0;                           // 0x00139e74: beqz $v0, 0x139ed0
    v0 = 0xc8;                                                  // 0x00139e78: addiu $v0, $zero, 0xc8
    if (a1 == v0) goto label_0x139eb0;                          // 0x00139e7c: beq $a1, $v0, 0x139eb0
    goto label_0x139efc;                                        // 0x00139e84: b 0x139efc
    /* nop */                                                   // 0x00139e8c: nop 
label_0x139e90:
    if (a1 == v0) goto label_0x139ee0;                          // 0x00139e90: beq $a1, $v0, 0x139ee0
    v0 = (a1 < 0xcd) ? 1 : 0;                                   // 0x00139e94: slti $v0, $a1, 0xcd
    if (v0 != 0) goto label_0x139ed0;                           // 0x00139e98: bnez $v0, 0x139ed0
    v0 = 0x12b;                                                 // 0x00139e9c: addiu $v0, $zero, 0x12b
    if (a1 == v0) goto label_0x139ef0;                          // 0x00139ea0: beq $a1, $v0, 0x139ef0
    goto label_0x139efc;                                        // 0x00139ea8: b 0x139efc
label_0x139eb0:
    func_00139df0();  // 0x139df0                               // 0x00139eb0: jal 0x139df0
    /* nop */                                                   // 0x00139eb4: nop 
    goto label_0x139ef4;                                        // 0x00139eb8: b 0x139ef4
label_0x139ec0:
    func_00139e00();  // 0x139e00                               // 0x00139ec0: jal 0x139e00
    /* nop */                                                   // 0x00139ec4: nop 
    goto label_0x139ef4;                                        // 0x00139ec8: b 0x139ef4
label_0x139ed0:
    func_00139e20();  // 0x139e20                               // 0x00139ed0: jal 0x139e20
    /* nop */                                                   // 0x00139ed4: nop 
    goto label_0x139ef4;                                        // 0x00139ed8: b 0x139ef4
label_0x139ee0:
    func_00139e28();  // 139e28                                // 0x00139ee0: jal 0x139e28
    /* nop */                                                   // 0x00139ee4: nop 
    goto label_0x139ef4;                                        // 0x00139ee8: b 0x139ef4
label_0x139ef0:
    v1 = 1;                                                     // 0x00139ef0: addiu $v1, $zero, 1
label_0x139ef4:
label_0x139ef8:
label_0x139efc:
    return;                                                     // 0x00139efc: jr $ra
    sp = sp + 0x10;                                             // 0x00139f00: addiu $sp, $sp, 0x10
}