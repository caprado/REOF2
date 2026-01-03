void func_001d5530() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d5534: addiu $sp, $sp, -0x10
    func_001d5410();  // 1d5410                                // 0x001d5540: jal 0x1d5410
    if (a0 == 0) goto label_0x1d55f4;                           // 0x001d554c: beqz $a0, 0x1d55f4
    v1 = 1;                                                     // 0x001d5550: addiu $v1, $zero, 1
    if (a3 != v1) goto label_0x1d5598;                          // 0x001d5554: bne $a3, $v1, 0x1d5598
    /* nop */                                                   // 0x001d5558: nop 
    a1 = *(uint8_t*)((a0) + 0xf);                               // 0x001d555c: lbu $a1, 0xf($a0)
    v1 = a1 & 2;                                                // 0x001d5560: andi $v1, $a1, 2
    if (v1 != 0) goto label_0x1d5574;                           // 0x001d5564: bnez $v1, 0x1d5574
    v1 = a1 & 4;                                                // 0x001d5568: andi $v1, $a1, 4
    if (v1 == 0) goto label_0x1d5598;                           // 0x001d556c: beqz $v1, 0x1d5598
    /* nop */                                                   // 0x001d5570: nop 
label_0x1d5574:
    a2 = *(uint8_t*)(a0);                                       // 0x001d5574: lbu $a2, 0($a0)
    v1 = ~a3;                                                   // 0x001d5578: not $v1, $a3
    a1 = v1 & 0xff;                                             // 0x001d557c: andi $a1, $v1, 0xff
    v1 = a2 + -1;                                               // 0x001d5580: addiu $v1, $a2, -1
    *(uint8_t*)(a0) = v1;                                       // 0x001d5584: sb $v1, 0($a0)
    v1 = *(uint8_t*)((a0) + 0xf);                               // 0x001d5588: lbu $v1, 0xf($a0)
    v1 = v1 & a1;                                               // 0x001d558c: and $v1, $v1, $a1
    goto label_0x1d55f4;                                        // 0x001d5590: b 0x1d55f4
    *(uint8_t*)((a0) + 0xf) = v1;                               // 0x001d5594: sb $v1, 0xf($a0)
label_0x1d5598:
    v1 = 4;                                                     // 0x001d5598: addiu $v1, $zero, 4
    if (a3 != v1) goto label_0x1d55d8;                          // 0x001d559c: bne $a3, $v1, 0x1d55d8
    /* nop */                                                   // 0x001d55a0: nop 
    v1 = *(uint8_t*)((a0) + 0xf);                               // 0x001d55a4: lbu $v1, 0xf($a0)
    v1 = v1 & 2;                                                // 0x001d55a8: andi $v1, $v1, 2
    if (v1 == 0) goto label_0x1d55d8;                           // 0x001d55ac: beqz $v1, 0x1d55d8
    /* nop */                                                   // 0x001d55b0: nop 
    a2 = *(uint8_t*)(a0);                                       // 0x001d55b4: lbu $a2, 0($a0)
    v1 = ~a3;                                                   // 0x001d55b8: not $v1, $a3
    a1 = v1 & 0xff;                                             // 0x001d55bc: andi $a1, $v1, 0xff
    v1 = a2 + -1;                                               // 0x001d55c0: addiu $v1, $a2, -1
    *(uint8_t*)(a0) = v1;                                       // 0x001d55c4: sb $v1, 0($a0)
    v1 = *(uint8_t*)((a0) + 0xf);                               // 0x001d55c8: lbu $v1, 0xf($a0)
    v1 = v1 & a1;                                               // 0x001d55cc: and $v1, $v1, $a1
    goto label_0x1d55f4;                                        // 0x001d55d0: b 0x1d55f4
    *(uint8_t*)((a0) + 0xf) = v1;                               // 0x001d55d4: sb $v1, 0xf($a0)
label_0x1d55d8:
    v0 = *(uint8_t*)((a0) + 0xf);                               // 0x001d55d8: lbu $v0, 0xf($a0)
    v0 = v0 & 4;                                                // 0x001d55dc: andi $v0, $v0, 4
    if (v0 == 0) goto label_0x1d55ec;                           // 0x001d55e0: beqz $v0, 0x1d55ec
    v0 = 1;                                                     // 0x001d55e4: addiu $v0, $zero, 1
    *(uint8_t*)(a0) = v0;                                       // 0x001d55e8: sb $v0, 0($a0)
label_0x1d55ec:
    func_001d53d0();  // 1d53d0                                // 0x001d55ec: jal 0x1d53d0
    /* nop */                                                   // 0x001d55f0: nop 
label_0x1d55f4:
    return;                                                     // 0x001d55f8: jr $ra
    sp = sp + 0x10;                                             // 0x001d55fc: addiu $sp, $sp, 0x10
}