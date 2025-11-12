void func_001b06a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    *(uint32_t*)((a0) + 0x18) = 0;                              // 0x001b06a0: sw $zero, 0x18($a0)
    v1 = 0xf << 16;                                             // 0x001b06a4: lui $v1, 0xf
    a2 = *(int32_t*)(a0);                                       // 0x001b06a8: lw $a2, 0($a0)
    a1 = v1 | 0xf;                                              // 0x001b06ac: ori $a1, $v1, 0xf
    v1 = a2 & a1;                                               // 0x001b06b0: and $v1, $a2, $a1
    if (v1 == 0) goto label_0x1b06cc;                           // 0x001b06b4: beqz $v1, 0x1b06cc
    v1 = 0xc;                                                   // 0x001b06b8: addiu $v1, $zero, 0xc
    *(uint32_t*)((a0) + 0x1c) = v1;                             // 0x001b06bc: sw $v1, 0x1c($a0)
    v1 = *(int32_t*)(a0);                                       // 0x001b06c0: lw $v1, 0($a0)
    goto label_0x1b0718;                                        // 0x001b06c4: b 0x1b0718
    *(uint32_t*)((a0) + 0x18) = v1;                             // 0x001b06c8: sw $v1, 0x18($a0)
label_0x1b06cc:
    v1 = *(int32_t*)((a0) + 8);                                 // 0x001b06cc: lw $v1, 8($a0)
    v1 = v1 & a1;                                               // 0x001b06d0: and $v1, $v1, $a1
    if (v1 == 0) goto label_0x1b0700;                           // 0x001b06d4: beqz $v1, 0x1b0700
    v1 = 0xc;                                                   // 0x001b06d8: addiu $v1, $zero, 0xc
    v1 = *(int32_t*)((a0) + 0x1c);                              // 0x001b06dc: lw $v1, 0x1c($a0)
    v1 = v1 + -1;                                               // 0x001b06e0: addiu $v1, $v1, -1
    if (v1 >= 0) goto label_0x1b0704;                           // 0x001b06e4: bgez $v1, 0x1b0704
    *(uint32_t*)((a0) + 0x1c) = v1;                             // 0x001b06e8: sw $v1, 0x1c($a0)
    v1 = 2;                                                     // 0x001b06ec: addiu $v1, $zero, 2
    *(uint32_t*)((a0) + 0x1c) = v1;                             // 0x001b06f0: sw $v1, 0x1c($a0)
    v1 = *(int32_t*)((a0) + 8);                                 // 0x001b06f4: lw $v1, 8($a0)
    goto label_0x1b0704;                                        // 0x001b06f8: b 0x1b0704
    *(uint32_t*)((a0) + 0x18) = v1;                             // 0x001b06fc: sw $v1, 0x18($a0)
label_0x1b0700:
    *(uint32_t*)((a0) + 0x1c) = v1;                             // 0x001b0700: sw $v1, 0x1c($a0)
label_0x1b0704:
    a1 = *(int32_t*)(a0);                                       // 0x001b0704: lw $a1, 0($a0)
    v1 = *(int32_t*)((a0) + 0x18);                              // 0x001b0708: lw $v1, 0x18($a0)
    a1 = a1 & 0x8ff0;                                           // 0x001b070c: andi $a1, $a1, 0x8ff0
    v1 = v1 | a1;                                               // 0x001b0710: or $v1, $v1, $a1
    *(uint32_t*)((a0) + 0x18) = v1;                             // 0x001b0714: sw $v1, 0x18($a0)
label_0x1b0718:
    return;                                                     // 0x001b0718: jr $ra
    /* nop */                                                   // 0x001b071c: nop 
}