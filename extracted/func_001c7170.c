void func_001c7170() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(uint16_t*)(a0);                                      // 0x001c7170: lhu $v1, 0($a0)
    v0 = 0x6756;                                                // 0x001c7174: addiu $v0, $zero, 0x6756
    if (v1 == v0) goto label_0x1c7188;                          // 0x001c7178: beq $v1, $v0, 0x1c7188
    v0 = -1;                                                    // 0x001c717c: addiu $v0, $zero, -1
    goto label_0x1c7220;                                        // 0x001c7180: b 0x1c7220
    /* nop */                                                   // 0x001c7184: nop 
label_0x1c7188:
    a3 = *(uint16_t*)((a0) + 2);                                // 0x001c7188: lhu $a3, 2($a0)
    t1 = *(uint16_t*)((a0) + 4);                                // 0x001c7190: lhu $t1, 4($a0)
    a0 = a0 + 8;                                                // 0x001c7198: addiu $a0, $a0, 8
    v0 = 1 << 16;                                               // 0x001c719c: lui $v0, 1
    a2 = 0 | 0xff53;                                            // 0x001c71a0: ori $a2, $zero, 0xff53
    v1 = v0 | 0xfe5c;                                           // 0x001c71a4: ori $v1, $v0, 0xfe5c
label_0x1c71a8:
    a1 = *(uint16_t*)(a0);                                      // 0x001c71a8: lhu $a1, 0($a0)
    v0 = a3 & 0xffff;                                           // 0x001c71ac: andi $v0, $a3, 0xffff
    a1 = a1 ^ a3;                                               // 0x001c71b0: xor $a1, $a1, $a3
    *(uint16_t*)(a0) = a1;                                      // 0x001c71b4: sh $a1, 0($a0)
    a1 = *(uint16_t*)(a0);                                      // 0x001c71b8: lhu $a1, 0($a0)
    a1 = t0 + a1;                                               // 0x001c71bc: addu $a1, $t0, $a1
    a0 = a0 + 2;                                                // 0x001c71c0: addiu $a0, $a0, 2
    if (v0 != 0) goto label_0x1c71d0;                           // 0x001c71c4: bnez $v0, 0x1c71d0
    t0 = a1 & 0xffff;                                           // 0x001c71c8: andi $t0, $a1, 0xffff
label_0x1c71d0:
    a3 = a3 & 0xffff;                                           // 0x001c71d0: andi $a3, $a3, 0xffff
    t2 = t2 + 1;                                                // 0x001c71d4: addiu $t2, $t2, 1
    a1 = a3 << 2;                                               // 0x001c71d8: sll $a1, $a3, 2
    v0 = (t2 < v1) ? 1 : 0;                                     // 0x001c71dc: slt $v0, $t2, $v1
    a1 = a1 + a3;                                               // 0x001c71e0: addu $a1, $a1, $a3
    a1 = a1 << 1;                                               // 0x001c71e4: sll $a1, $a1, 1
    a1 = a1 + a3;                                               // 0x001c71e8: addu $a1, $a1, $a3
    a1 = a1 << 4;                                               // 0x001c71ec: sll $a1, $a1, 4
    /* divide: a1 / a2 -> hi:lo */                              // 0x001c71f0: div $zero, $a1, $a2
    /* nop */                                                   // 0x001c71f4: nop 
    /* nop */                                                   // 0x001c71f8: nop 
    /* mfhi $a1 */                                              // 0x001c71fc
    if (v0 != 0) goto label_0x1c71a8;                           // 0x001c7200: bnez $v0, 0x1c71a8
    a3 = a1 & 0xffff;                                           // 0x001c7204: andi $a3, $a1, 0xffff
    v1 = t1 & 0xffff;                                           // 0x001c7208: andi $v1, $t1, 0xffff
    v0 = t0 & 0xffff;                                           // 0x001c720c: andi $v0, $t0, 0xffff
    if (v1 == v0) goto label_0x1c7220;                          // 0x001c7210: beq $v1, $v0, 0x1c7220
    goto label_0x1c7220;                                        // 0x001c7218: b 0x1c7220
    v0 = -2;                                                    // 0x001c721c: addiu $v0, $zero, -2
label_0x1c7220:
    return;                                                     // 0x001c7220: jr $ra
    /* nop */                                                   // 0x001c7224: nop 
}