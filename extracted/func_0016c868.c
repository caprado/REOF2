void func_0016c868() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)(a3);                                       // 0x0016c870: lw $v1, 0($a3)
    v0 = ((unsigned)a2 < (unsigned)v1) ? 1 : 0;                 // 0x0016c874: sltu $v0, $a2, $v1
    if (v0 != 0) goto label_0x16c894;                           // 0x0016c878: bnez $v0, 0x16c894
    a0 = a2 - v1;                                               // 0x0016c87c: subu $a0, $a2, $v1
    v0 = *(int32_t*)((a3) + 4);                                 // 0x0016c880: lw $v0, 4($a3)
    v0 = v1 + v0;                                               // 0x0016c884: addu $v0, $v1, $v0
    v0 = ((unsigned)a2 < (unsigned)v0) ? 1 : 0;                 // 0x0016c888: sltu $v0, $a2, $v0
    if (v0 != 0) goto label_0x16c8c4;                           // 0x0016c88c: bnez $v0, 0x16c8c4
    /* nop */                                                   // 0x0016c890: nop 
label_0x16c894:
    a1 = *(int32_t*)((a3) + 8);                                 // 0x0016c894: lw $a1, 8($a3)
    v0 = ((unsigned)a2 < (unsigned)a1) ? 1 : 0;                 // 0x0016c898: sltu $v0, $a2, $a1
    if (v0 != 0) goto label_0x16c8c4;                           // 0x0016c89c: bnez $v0, 0x16c8c4
    v0 = *(int32_t*)((a3) + 0xc);                               // 0x0016c8a4: lw $v0, 0xc($a3)
    v0 = a1 + v0;                                               // 0x0016c8a8: addu $v0, $a1, $v0
    v0 = ((unsigned)a2 < (unsigned)v0) ? 1 : 0;                 // 0x0016c8ac: sltu $v0, $a2, $v0
    if (v0 == 0) goto label_0x16c8c4;                           // 0x0016c8b0: beqz $v0, 0x16c8c4
    /* nop */                                                   // 0x0016c8b4: nop 
    v1 = *(int32_t*)((a3) + 4);                                 // 0x0016c8b8: lw $v1, 4($a3)
    v0 = a2 - a1;                                               // 0x0016c8bc: subu $v0, $a2, $a1
    a0 = v0 + v1;                                               // 0x0016c8c0: addu $a0, $v0, $v1
label_0x16c8c4:
    return;                                                     // 0x0016c8c4: jr $ra
}