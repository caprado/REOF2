void func_0011c968() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x0011c968: addiu $sp, $sp, -0x80
    v0 = 0x22 << 16;                                            // 0x0011c96c: lui $v0, 0x22
    v1 = *(int8_t*)(s0);                                        // 0x0011c980: lb $v1, 0($s0)
    if (v1 == 0) goto label_0x11c9b4;                           // 0x0011c984: beqz $v1, 0x11c9b4
    s1 = v0 + 0x1420;                                           // 0x0011c988: addiu $s1, $v0, 0x1420
    v1 = s0 + -0xb;                                             // 0x0011c98c: addiu $v1, $s0, -0xb
label_0x11c990:
    a0 = a0 + 1;                                                // 0x0011c990: addiu $a0, $a0, 1
    v0 = g_00221431;  // Global at 0x00221431                   // 0x0011c994: lb $v0, 0($a0)
    /* nop */                                                   // 0x0011c998: nop 
    /* nop */                                                   // 0x0011c99c: nop 
    /* nop */                                                   // 0x0011c9a0: nop 
    if (v0 != 0) goto label_0x11c990;                           // 0x0011c9a4: bnez $v0, 0x11c990
    /* nop */                                                   // 0x0011c9a8: nop 
    goto label_0x11c9bc;                                        // 0x0011c9ac: b 0x11c9bc
    v0 = a0 - v1;                                               // 0x0011c9b0: subu $v0, $a0, $v1
label_0x11c9b4:
    v1 = s0 + -0xb;                                             // 0x0011c9b4: addiu $v1, $s0, -0xb
    v0 = a0 - v1;                                               // 0x0011c9b8: subu $v0, $a0, $v1
label_0x11c9bc:
    v0 = ((unsigned)v0 < (unsigned)0x51) ? 1 : 0;               // 0x0011c9bc: sltiu $v0, $v0, 0x51
    if (v0 != 0) goto label_0x11c9dc;                           // 0x0011c9c0: bnez $v0, 0x11c9dc
    a0 = 0x22 << 16;                                            // 0x0011c9c4: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x0011c9cc: jal 0x116508
    a0 = &str_00221430;  // "# TLB spad=0 kernel=1:%d default=%d:%d extended=%d:%d\n" // 0x0011c9d0: addiu $a0, $a0, 0x1430
    goto label_0x11ca64;                                        // 0x0011c9d4: b 0x11ca64
label_0x11c9dc:
    func_00116ee0();  // 0x116d40                                // 0x0011c9dc: jal 0x116d40
    func_00116f08();  // 0x116ee0                                // 0x0011c9e4: jal 0x116ee0
    /* nop */                                                   // 0x0011c9e8: nop 
    v0 = g_00221420;  // Global at 0x00221420                   // 0x0011c9ec: lb $v0, 0($s1)
    if (v0 == 0) goto label_0x11ca24;                           // 0x0011c9f4: beqz $v0, 0x11ca24
    a0 = g_00221420;  // Global at 0x00221420                   // 0x0011c9f8: lbu $a0, 0($s1)
    a1 = *(uint8_t*)(s0);                                       // 0x0011c9fc: lbu $a1, 0($s0)
label_0x11ca00:
    *(uint8_t*)(v1) = a0;                                       // 0x0011ca00: sb $a0, 0($v1)
    s1 = s1 + 1;                                                // 0x0011ca04: addiu $s1, $s1, 1
    v1 = v1 + 1;                                                // 0x0011ca08: addiu $v1, $v1, 1
    a0 = g_00221421;  // Global at 0x00221421                   // 0x0011ca0c: lbu $a0, 0($s1)
    v0 = g_00221421;  // Global at 0x00221421                   // 0x0011ca10: lb $v0, 0($s1)
    if (v0 != 0) goto label_0x11ca00;                           // 0x0011ca14: bnez $v0, 0x11ca00
    /* nop */                                                   // 0x0011ca18: nop 
    goto label_0x11ca2c;                                        // 0x0011ca1c: b 0x11ca2c
label_0x11ca24:
    a1 = *(uint8_t*)(s0);                                       // 0x0011ca24: lbu $a1, 0($s0)
label_0x11ca2c:
    /* beqzl $a0, 0x11ca58 */                                   // 0x0011ca2c: beqzl $a0, 0x11ca58
    *(uint8_t*)(v1) = 0;                                        // 0x0011ca30: sb $zero, 0($v1)
    /* nop */                                                   // 0x0011ca34: nop 
label_0x11ca38:
    *(uint8_t*)(v1) = a0;                                       // 0x0011ca38: sb $a0, 0($v1)
    s0 = s0 + 1;                                                // 0x0011ca3c: addiu $s0, $s0, 1
    v1 = v1 + 1;                                                // 0x0011ca40: addiu $v1, $v1, 1
    v0 = *(int8_t*)(s0);                                        // 0x0011ca44: lb $v0, 0($s0)
    if (v0 != 0) goto label_0x11ca38;                           // 0x0011ca4c: bnez $v0, 0x11ca38
    /* nop */                                                   // 0x0011ca50: nop 
    *(uint8_t*)(v1) = 0;                                        // 0x0011ca54: sb $zero, 0($v1)
    func_0011c8f0();  // 0x11c798                                // 0x0011ca5c: jal 0x11c798
label_0x11ca64:
    return;                                                     // 0x0011ca70: jr $ra
    sp = sp + 0x80;                                             // 0x0011ca74: addiu $sp, $sp, 0x80
}