void func_001cb610() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = *(int32_t*)(a1);                                       // 0x001cb610: lw $a1, 0($a1)
    goto label_0x1cb630;                                        // 0x001cb614: b 0x1cb630
label_0x1cb61c:
    v1 = a2 << 2;                                               // 0x001cb61c: sll $v1, $a2, 2
    v1 = a0 + v1;                                               // 0x001cb620: addu $v1, $a0, $v1
    a2 = a2 + 1;                                                // 0x001cb624: addiu $a2, $a2, 1
    *(uint32_t*)(v1) = a1;                                      // 0x001cb628: sw $a1, 0($v1)
    a1 = *(int32_t*)((a1) + 4);                                 // 0x001cb62c: lw $a1, 4($a1)
label_0x1cb630:
    if (a1 != 0) goto label_0x1cb61c;                           // 0x001cb630: bnez $a1, 0x1cb61c
    /* nop */                                                   // 0x001cb634: nop 
    return;                                                     // 0x001cb638: jr $ra
    /* nop */                                                   // 0x001cb63c: nop 
}