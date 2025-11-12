void func_001a7610() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x2a << 16;                                            // 0x001a7610: lui $at, 0x2a
    v0 = 0x2a << 16;                                            // 0x001a7614: lui $v0, 0x2a
    a1 = g_002a0f70;  // Global at 0x002a0f70                   // 0x001a7618: lw $a1, 0xf70($at)
    v0 = v0 + 0xf80;                                            // 0x001a761c: addiu $v0, $v0, 0xf80
    v1 = a1 << 1;                                               // 0x001a7620: sll $v1, $a1, 1
    v1 = v1 + a1;                                               // 0x001a7624: addu $v1, $v1, $a1
    v1 = v1 << 2;                                               // 0x001a7628: sll $v1, $v1, 2
    a1 = v0 + v1;                                               // 0x001a762c: addu $a1, $v0, $v1
    v0 = *(int32_t*)(a1);                                       // 0x001a7630: lw $v0, 0($a1)
    if (v0 < 0) goto label_0x1a7644;                            // 0x001a7634: bltz $v0, 0x1a7644
    v1 = ((unsigned)0 < (unsigned)a0) ? 1 : 0;                  // 0x001a7638: sltu $v1, $zero, $a0
    goto label_0x1a7688;                                        // 0x001a763c: b 0x1a7688
    v0 = -1;                                                    // 0x001a7640: addiu $v0, $zero, -1
label_0x1a7644:
    v0 = 0x4100 << 16;                                          // 0x001a7644: lui $v0, 0x4100
    v1 = v1 << 0x10;                                            // 0x001a7648: sll $v1, $v1, 0x10
    at = 0x2a << 16;                                            // 0x001a764c: lui $at, 0x2a
    v0 = v1 | v0;                                               // 0x001a7658: or $v0, $v1, $v0
    *(uint32_t*)(a1) = v0;                                      // 0x001a765c: sw $v0, 0($a1)
    v0 = g_002a0f70;  // Global at 0x002a0f70                   // 0x001a7660: lw $v0, 0xf70($at)
    v1 = v0 + 1;                                                // 0x001a7664: addiu $v1, $v0, 1
    if (v1 >= 0) goto label_0x1a767c;                           // 0x001a7668: bgez $v1, 0x1a767c
    v0 = v1 & 0x1f;                                             // 0x001a766c: andi $v0, $v1, 0x1f
    if (v0 == 0) goto label_0x1a767c;                           // 0x001a7670: beqz $v0, 0x1a767c
    /* nop */                                                   // 0x001a7674: nop 
    v0 = v0 + -0x20;                                            // 0x001a7678: addiu $v0, $v0, -0x20
label_0x1a767c:
    at = 0x2a << 16;                                            // 0x001a767c: lui $at, 0x2a
    g_002a0f70 = v0;  // Global at 0x002a0f70                   // 0x001a7680: sw $v0, 0xf70($at)
label_0x1a7688:
    return;                                                     // 0x001a7688: jr $ra
    /* nop */                                                   // 0x001a768c: nop 
}