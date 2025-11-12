void func_0012c1e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012c1e0: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 0xc);                               // 0x0012c1e8: lw $v0, 0xc($a0)
    a0 = a1 << 2;                                               // 0x0012c1ec: sll $a0, $a1, 2
    v0 = v0 + a0;                                               // 0x0012c1f0: addu $v0, $v0, $a0
    v1 = *(int32_t*)((v0) + 8);                                 // 0x0012c1f4: lw $v1, 8($v0)
    a0 = *(int32_t*)((v1) + 8);                                 // 0x0012c1f8: lw $a0, 8($v1)
    a2 = *(int32_t*)(a0);                                       // 0x0012c1fc: lw $a2, 0($a0)
    v0 = *(int32_t*)((a2) + 0x24);                              // 0x0012c200: lw $v0, 0x24($a2)
    /* call function at address in v0 */                        // 0x0012c204: jalr $v0
    v0 = (unsigned)v0 >> 1;                                     // 0x0012c210: srl $v0, $v0, 1
    return;                                                     // 0x0012c214: jr $ra
    sp = sp + 0x10;                                             // 0x0012c218: addiu $sp, $sp, 0x10
}