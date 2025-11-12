void func_001698a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001698a0: addiu $sp, $sp, -0x10
    goto label_0x1698b8;                                        // 0x001698ac: j 0x1698b8
    sp = sp + 0x10;                                             // 0x001698b0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001698b4: nop 
label_0x1698b8:
    *(uint32_t*)((a0) + 0x10) = 0;                              // 0x001698b8: sw $zero, 0x10($a0)
    *(uint32_t*)(a0) = 0;                                       // 0x001698bc: sw $zero, 0($a0)
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x001698c0: sw $zero, 4($a0)
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x001698c4: sw $zero, 8($a0)
    return;                                                     // 0x001698c8: jr $ra
    *(uint32_t*)((a0) + 0xc) = 0;                               // 0x001698cc: sw $zero, 0xc($a0)
}