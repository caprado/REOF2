void func_00116f08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00116f08: addiu $sp, $sp, -0x30
    func_0011d320();  // 11d320                                // 0x00116f18: jal 0x11d320
    a0 = *(int32_t*)((s1) + 8);                                 // 0x00116f20: lw $a0, 8($s1)
    if (a0 <= 0) goto label_0x116f90;                           // 0x00116f28: blez $a0, 0x116f90
    s0 = *(int32_t*)((s1) + 4);                                 // 0x00116f2c: lw $s0, 4($s1)
    a1 = 1;                                                     // 0x00116f30: addiu $a1, $zero, 1
    /* nop */                                                   // 0x00116f34: nop 
label_0x116f38:
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x00116f38: lw $v0, 0x10($s0)
    v0 = v0 & 1;                                                // 0x00116f3c: andi $v0, $v0, 1
    /* bnezl $v0, 0x116f84 */                                   // 0x00116f40: bnezl $v0, 0x116f84
    v1 = v1 + 1;                                                // 0x00116f44: addiu $v1, $v1, 1
    v0 = v1 << 0x10;                                            // 0x00116f48: sll $v0, $v1, 0x10
    v0 = v0 | 5;                                                // 0x00116f4c: ori $v0, $v0, 5
    *(uint32_t*)((s0) + 0x10) = v0;                             // 0x00116f50: sw $v0, 0x10($s0)
    v0 = *(int32_t*)(s1);                                       // 0x00116f54: lw $v0, 0($s1)
    v1 = v0 + 1;                                                // 0x00116f58: addiu $v1, $v0, 1
    if (v1 != a1) goto label_0x116f70;                          // 0x00116f5c: bne $v1, $a1, 0x116f70
    *(uint32_t*)(s1) = v1;                                      // 0x00116f60: sw $v1, 0($s1)
    v0 = v0 + 2;                                                // 0x00116f64: addiu $v0, $v0, 2
    v1 = 1;                                                     // 0x00116f68: addiu $v1, $zero, 1
    *(uint32_t*)(s1) = v0;                                      // 0x00116f6c: sw $v0, 0($s1)
label_0x116f70:
    *(uint32_t*)((s0) + 0x14) = s0;                             // 0x00116f70: sw $s0, 0x14($s0)
    func_0011d378();  // 11d378                                // 0x00116f74: jal 0x11d378
    *(uint32_t*)((s0) + 0x18) = v1;                             // 0x00116f78: sw $v1, 0x18($s0)
    goto label_0x116f9c;                                        // 0x00116f7c: b 0x116f9c
    v0 = (v1 < a0) ? 1 : 0;                                     // 0x00116f84: slt $v0, $v1, $a0
    if (v0 != 0) goto label_0x116f38;                           // 0x00116f88: bnez $v0, 0x116f38
    s0 = s0 + 0x40;                                             // 0x00116f8c: addiu $s0, $s0, 0x40
label_0x116f90:
    func_0011d378();  // 11d378                                // 0x00116f90: jal 0x11d378
    /* nop */                                                   // 0x00116f94: nop 
label_0x116f9c:
    return;                                                     // 0x00116fa8: jr $ra
    sp = sp + 0x30;                                             // 0x00116fac: addiu $sp, $sp, 0x30
}