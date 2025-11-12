void func_0013b9b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013b9b0: addiu $sp, $sp, -0x10
    if (a0 == 0) goto label_0x13ba68;                           // 0x0013b9bc: beqz $a0, 0x13ba68
    v0 = 0xcb;                                                  // 0x0013b9c4: addiu $v0, $zero, 0xcb
    if (a1 == v0) goto label_0x13ba50;                          // 0x0013b9c8: beq $a1, $v0, 0x13ba50
    v0 = (a1 < 0xcc) ? 1 : 0;                                   // 0x0013b9cc: slti $v0, $a1, 0xcc
    if (v0 == 0) goto label_0x13ba00;                           // 0x0013b9d0: beqz $v0, 0x13ba00
    v0 = 0xcd;                                                  // 0x0013b9d4: addiu $v0, $zero, 0xcd
    v0 = 0xc9;                                                  // 0x0013b9d8: addiu $v0, $zero, 0xc9
    if (a1 == v0) goto label_0x13ba30;                          // 0x0013b9dc: beq $a1, $v0, 0x13ba30
    v0 = (a1 < 0xca) ? 1 : 0;                                   // 0x0013b9e0: slti $v0, $a1, 0xca
    if (v0 == 0) goto label_0x13ba40;                           // 0x0013b9e4: beqz $v0, 0x13ba40
    v0 = 0xc8;                                                  // 0x0013b9e8: addiu $v0, $zero, 0xc8
    if (a1 == v0) goto label_0x13ba20;                          // 0x0013b9ec: beq $a1, $v0, 0x13ba20
    goto label_0x13ba6c;                                        // 0x0013b9f4: b 0x13ba6c
    /* nop */                                                   // 0x0013b9fc: nop 
label_0x13ba00:
    if (a1 == v0) goto label_0x13ba50;                          // 0x0013ba00: beq $a1, $v0, 0x13ba50
    v0 = (a1 < 0xcd) ? 1 : 0;                                   // 0x0013ba04: slti $v0, $a1, 0xcd
    if (v0 != 0) goto label_0x13ba40;                           // 0x0013ba08: bnez $v0, 0x13ba40
    v0 = 0x12b;                                                 // 0x0013ba0c: addiu $v0, $zero, 0x12b
    if (a1 == v0) goto label_0x13ba60;                          // 0x0013ba10: beq $a1, $v0, 0x13ba60
    goto label_0x13ba6c;                                        // 0x0013ba18: b 0x13ba6c
label_0x13ba20:
    func_0013b930();  // 0x13b910                                // 0x0013ba20: jal 0x13b910
    /* nop */                                                   // 0x0013ba24: nop 
    goto label_0x13ba64;                                        // 0x0013ba28: b 0x13ba64
label_0x13ba30:
    func_0013b960();  // 0x13b930                                // 0x0013ba30: jal 0x13b930
    /* nop */                                                   // 0x0013ba34: nop 
    goto label_0x13ba64;                                        // 0x0013ba38: b 0x13ba64
label_0x13ba40:
    func_0013b980();  // 0x13b960                                // 0x0013ba40: jal 0x13b960
    /* nop */                                                   // 0x0013ba44: nop 
    goto label_0x13ba64;                                        // 0x0013ba48: b 0x13ba64
label_0x13ba50:
    func_0013b9b0();  // 0x13b980                                // 0x0013ba50: jal 0x13b980
    /* nop */                                                   // 0x0013ba54: nop 
    goto label_0x13ba64;                                        // 0x0013ba58: b 0x13ba64
label_0x13ba60:
    v1 = 1;                                                     // 0x0013ba60: addiu $v1, $zero, 1
label_0x13ba64:
label_0x13ba68:
label_0x13ba6c:
    return;                                                     // 0x0013ba6c: jr $ra
    sp = sp + 0x10;                                             // 0x0013ba70: addiu $sp, $sp, 0x10
}