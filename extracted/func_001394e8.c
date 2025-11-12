void func_001394e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001394e8: addiu $sp, $sp, -0x10
    func_0010af38();  // 0x10ae00                                // 0x001394f4: jal 0x10ae00
    if (a3 == 0) goto label_0x139550;                           // 0x00139500: beqz $a3, 0x139550
    t1 = 0x2f;                                                  // 0x00139508: addiu $t1, $zero, 0x2f
    t0 = 0x5c;                                                  // 0x0013950c: addiu $t0, $zero, 0x5c
    a0 = s0 + a2;                                               // 0x00139510: addu $a0, $s0, $a2
    /* nop */                                                   // 0x00139514: nop 
label_0x139518:
    a2 = a2 + 1;                                                // 0x00139518: addiu $a2, $a2, 1
    v0 = *(int8_t*)(a0);                                        // 0x0013951c: lb $v0, 0($a0)
    a1 = ((unsigned)a2 < (unsigned)a3) ? 1 : 0;                 // 0x00139520: sltu $a1, $a2, $a3
    if (v0 != t1) goto label_0x139534;                          // 0x00139524: bne $v0, $t1, 0x139534
    v1 = *(uint8_t*)(a0);                                       // 0x00139528: lbu $v1, 0($a0)
    *(uint8_t*)(a0) = t0;                                       // 0x0013952c: sb $t0, 0($a0)
label_0x139534:
    v0 = v1 + -0x61;                                            // 0x00139534: addiu $v0, $v1, -0x61
    v0 = ((unsigned)v0 < (unsigned)0x1a) ? 1 : 0;               // 0x00139538: sltiu $v0, $v0, 0x1a
    if (v0 == 0) goto label_0x139548;                           // 0x0013953c: beqz $v0, 0x139548
    v0 = v1 + -0x20;                                            // 0x00139540: addiu $v0, $v1, -0x20
    *(uint8_t*)(a0) = v0;                                       // 0x00139544: sb $v0, 0($a0)
label_0x139548:
    if (a1 != 0) goto label_0x139518;                           // 0x00139548: bnez $a1, 0x139518
    a0 = s0 + a2;                                               // 0x0013954c: addu $a0, $s0, $a2
label_0x139550:
    return;                                                     // 0x00139558: jr $ra
    sp = sp + 0x10;                                             // 0x0013955c: addiu $sp, $sp, 0x10
}