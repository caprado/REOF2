void func_001580e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x21 << 16;                                            // 0x001580e8: lui $v1, 0x21
    v0 = g_00213e70;  // Global at 0x00213e70                   // 0x001580f0: lw $v0, 0x3e70($v1)
    a1 = *(int32_t*)((v0) + 0xc);                               // 0x001580f4: lw $a1, 0xc($v0)
    if (a1 <= 0) goto label_0x158134;                           // 0x001580f8: blez $a1, 0x158134
    v0 = v0 + 0x10;                                             // 0x001580fc: addiu $v0, $v0, 0x10
    a3 = 1;                                                     // 0x00158104: addiu $a3, $zero, 1
    v1 = *(int32_t*)(a0);                                       // 0x00158108: lw $v1, 0($a0)
    /* nop */                                                   // 0x0015810c: nop 
    if (v1 == a3) goto label_0x158138;                          // 0x00158114: beq $v1, $a3, 0x158138
    a0 = a0 + 0xc0;                                             // 0x00158118: addiu $a0, $a0, 0xc0
    a2 = a2 + 1;                                                // 0x0015811c: addiu $a2, $a2, 1
    v0 = (a2 < a1) ? 1 : 0;                                     // 0x00158120: slt $v0, $a2, $a1
    /* nop */                                                   // 0x00158124: nop 
    /* nop */                                                   // 0x00158128: nop 
    /* bnezl $v0, 0x158110 */                                   // 0x0015812c: bnezl $v0, 0x158110
    v1 = *(int32_t*)(a0);                                       // 0x00158130: lw $v1, 0($a0)
label_0x158134:
label_0x158138:
    return;                                                     // 0x00158138: jr $ra
    /* nop */                                                   // 0x0015813c: nop 
}