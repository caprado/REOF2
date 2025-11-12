void func_0013e970() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013e970: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 8);                                 // 0x0013e978: lw $v0, 8($a0)
    a0 = *(int32_t*)((v0) + 8);                                 // 0x0013e97c: lw $a0, 8($v0)
    v1 = *(int32_t*)(a0);                                       // 0x0013e980: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x0013e984: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0013e988: jalr $v0
    v1 = 0x4000;                                                // 0x0013e990: addiu $v1, $zero, 0x4000
    v1 = v1 - v0;                                               // 0x0013e994: subu $v1, $v1, $v0
    v0 = (unsigned)v1 >> 0x1f;                                  // 0x0013e99c: srl $v0, $v1, 0x1f
    v1 = v1 + v0;                                               // 0x0013e9a0: addu $v1, $v1, $v0
    v0 = v1 >> 1;                                               // 0x0013e9a4: sra $v0, $v1, 1
    return;                                                     // 0x0013e9a8: jr $ra
    sp = sp + 0x10;                                             // 0x0013e9ac: addiu $sp, $sp, 0x10
}