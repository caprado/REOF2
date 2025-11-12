void func_001c2590() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    goto label_0x1c2604;                                        // 0x001c2590: b 0x1c2604
    a2 = *(uint8_t*)(a0);                                       // 0x001c2594: lbu $a2, 0($a0)
label_0x1c2598:
    a3 = *(uint8_t*)(a0);                                       // 0x001c2598: lbu $a3, 0($a0)
    v1 = (a3 < 0x80) ? 1 : 0;                                   // 0x001c259c: slti $v1, $a3, 0x80
    if (v1 != 0) goto label_0x1c25b4;                           // 0x001c25a0: bnez $v1, 0x1c25b4
    v1 = (a3 < 0xe0) ? 1 : 0;                                   // 0x001c25a4: slti $v1, $a3, 0xe0
    at = (a3 < 0xa0) ? 1 : 0;                                   // 0x001c25a8: slti $at, $a3, 0xa0
    if (at != 0) goto label_0x1c25c4;                           // 0x001c25ac: bnez $at, 0x1c25c4
    /* nop */                                                   // 0x001c25b0: nop 
label_0x1c25b4:
    if (v1 != 0) goto label_0x1c25dc;                           // 0x001c25b4: bnez $v1, 0x1c25dc
    at = (a3 < 0x100) ? 1 : 0;                                  // 0x001c25b8: slti $at, $a3, 0x100
    if (at == 0) goto label_0x1c25dc;                           // 0x001c25bc: beqz $at, 0x1c25dc
    /* nop */                                                   // 0x001c25c0: nop 
label_0x1c25c4:
    *(uint8_t*)(a1) = a2;                                       // 0x001c25c4: sb $a2, 0($a1)
    v1 = *(uint8_t*)((a0) + 1);                                 // 0x001c25c8: lbu $v1, 1($a0)
    *(uint8_t*)((a1) + 1) = v1;                                 // 0x001c25cc: sb $v1, 1($a1)
    a0 = a0 + 2;                                                // 0x001c25d0: addiu $a0, $a0, 2
    goto label_0x1c2600;                                        // 0x001c25d4: b 0x1c2600
    a1 = a1 + 2;                                                // 0x001c25d8: addiu $a1, $a1, 2
label_0x1c25dc:
    v1 = *(int32_t*)((gp) + -0x7b9c);                           // 0x001c25dc: lw $v1, -0x7b9c($gp)
    a2 = a2 << 1;                                               // 0x001c25e0: sll $a2, $a2, 1
    a0 = a0 + 1;                                                // 0x001c25e4: addiu $a0, $a0, 1
    a2 = v1 + a2;                                               // 0x001c25e8: addu $a2, $v1, $a2
    v1 = *(uint8_t*)(a2);                                       // 0x001c25ec: lbu $v1, 0($a2)
    *(uint8_t*)(a1) = v1;                                       // 0x001c25f0: sb $v1, 0($a1)
    v1 = *(uint8_t*)((a2) + 1);                                 // 0x001c25f4: lbu $v1, 1($a2)
    *(uint8_t*)((a1) + 1) = v1;                                 // 0x001c25f8: sb $v1, 1($a1)
    a1 = a1 + 2;                                                // 0x001c25fc: addiu $a1, $a1, 2
label_0x1c2600:
    a2 = *(uint8_t*)(a0);                                       // 0x001c2600: lbu $a2, 0($a0)
label_0x1c2604:
    if (a2 != 0) goto label_0x1c2598;                           // 0x001c2604: bnez $a2, 0x1c2598
    /* nop */                                                   // 0x001c2608: nop 
    return;                                                     // 0x001c260c: jr $ra
    *(uint8_t*)(a1) = 0;                                        // 0x001c2610: sb $zero, 0($a1)
}