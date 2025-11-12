void func_00107ea8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    if (a1 == 0) goto label_0x107ecc;                           // 0x00107ea8: beqz $a1, 0x107ecc
    /* nop */                                                   // 0x00107eac: nop 
    v0 = *(int32_t*)((a1) + 4);                                 // 0x00107eb0: lw $v0, 4($a1)
    a0 = *(int32_t*)((a0) + 0x4c);                              // 0x00107eb4: lw $a0, 0x4c($a0)
    v0 = v0 << 2;                                               // 0x00107eb8: sll $v0, $v0, 2
    v0 = v0 + a0;                                               // 0x00107ebc: addu $v0, $v0, $a0
    v1 = *(int32_t*)(v0);                                       // 0x00107ec0: lw $v1, 0($v0)
    *(uint32_t*)(a1) = v1;                                      // 0x00107ec4: sw $v1, 0($a1)
    *(uint32_t*)(v0) = a1;                                      // 0x00107ec8: sw $a1, 0($v0)
label_0x107ecc:
    return;                                                     // 0x00107ecc: jr $ra
    /* nop */                                                   // 0x00107ed0: nop 
}