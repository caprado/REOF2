void func_00166f10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4;
    
    sp = sp + -0x30;                                            // 0x00166f10: addiu $sp, $sp, -0x30
    s0 = v0 + 0x18;                                             // 0x00166f1c: addiu $s0, $v0, 0x18
    a1 = 1;                                                     // 0x00166f24: addiu $a1, $zero, 1
    a3 = sp + 0x10;                                             // 0x00166f2c: addiu $a3, $sp, 0x10
    func_00166fa0();  // 166fa0                                // 0x00166f30: jal 0x166fa0
    a0 = *(int32_t*)((v0) + 4);                                 // 0x00166f34: lw $a0, 4($v0)
    v1 = *(int32_t*)(s0);                                       // 0x00166f38: lw $v1, 0($s0)
    a0 = local_0;                                               // 0x00166f3c: lw $a0, 0($sp)
    v0 = ((unsigned)v1 < (unsigned)a0) ? 1 : 0;                 // 0x00166f40: sltu $v0, $v1, $a0
    /* bnezl $v0, 0x166f64 */                                   // 0x00166f44: bnezl $v0, 0x166f64
    a0 = local_10;                                              // 0x00166f48: lw $a0, 0x10($sp)
    v0 = local_4;                                               // 0x00166f4c: lw $v0, 4($sp)
    v0 = a0 + v0;                                               // 0x00166f50: addu $v0, $a0, $v0
    v0 = ((unsigned)v1 < (unsigned)v0) ? 1 : 0;                 // 0x00166f54: sltu $v0, $v1, $v0
    /* bnezl $v0, 0x166f90 */                                   // 0x00166f58: bnezl $v0, 0x166f90
    a0 = local_10;                                              // 0x00166f60: lw $a0, 0x10($sp)
    v0 = ((unsigned)v1 < (unsigned)a0) ? 1 : 0;                 // 0x00166f64: sltu $v0, $v1, $a0
    /* bnezl $v0, 0x166f88 */                                   // 0x00166f68: bnezl $v0, 0x166f88
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x00166f6c: sw $zero, 4($s0)
    v0 = local_14;                                              // 0x00166f70: lw $v0, 0x14($sp)
    v0 = a0 + v0;                                               // 0x00166f74: addu $v0, $a0, $v0
    v0 = ((unsigned)v1 < (unsigned)v0) ? 1 : 0;                 // 0x00166f78: sltu $v0, $v1, $v0
    /* bnezl $v0, 0x166f90 */                                   // 0x00166f7c: bnezl $v0, 0x166f90
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x00166f84: sw $zero, 4($s0)
    *(uint32_t*)(s0) = 0;                                       // 0x00166f88: sw $zero, 0($s0)
    return;                                                     // 0x00166f94: jr $ra
    sp = sp + 0x30;                                             // 0x00166f98: addiu $sp, $sp, 0x30
}