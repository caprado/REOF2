void func_001c7230() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c7230: addiu $sp, $sp, -0x10
    v0 = 5;                                                     // 0x001c7234: addiu $v0, $zero, 5
    if (a2 != v0) goto label_0x1c7254;                          // 0x001c723c: bne $a2, $v0, 0x1c7254
    func_001c7170();  // 1c7170                                // 0x001c7244: jal 0x1c7170
    /* nop */                                                   // 0x001c7248: nop 
    goto label_0x1c7300;                                        // 0x001c724c: b 0x1c7300
label_0x1c7254:
    t1 = *(uint16_t*)((a3) + 2);                                // 0x001c7254: lhu $t1, 2($a3)
    v0 = a1 + -0x10;                                            // 0x001c7258: addiu $v0, $a1, -0x10
    a0 = a3 + 0x10;                                             // 0x001c725c: addiu $a0, $a3, 0x10
    if (v0 >= 0) goto label_0x1c7278;                           // 0x001c7268: bgez $v0, 0x1c7278
    a2 = v0 >> 1;                                               // 0x001c726c: sra $a2, $v0, 1
    v0 = v0 + 1;                                                // 0x001c7270: addiu $v0, $v0, 1
    a2 = v0 >> 1;                                               // 0x001c7274: sra $a2, $v0, 1
label_0x1c7278:
    goto label_0x1c72d8;                                        // 0x001c7278: b 0x1c72d8
    v1 = 0 | 0xff53;                                            // 0x001c727c: ori $v1, $zero, 0xff53
label_0x1c7280:
    a1 = *(uint16_t*)(a0);                                      // 0x001c7280: lhu $a1, 0($a0)
    v0 = t1 & 0xffff;                                           // 0x001c7284: andi $v0, $t1, 0xffff
    a1 = a1 ^ t1;                                               // 0x001c7288: xor $a1, $a1, $t1
    *(uint16_t*)(a0) = a1;                                      // 0x001c728c: sh $a1, 0($a0)
    a1 = *(uint16_t*)(a0);                                      // 0x001c7290: lhu $a1, 0($a0)
    a1 = t0 + a1;                                               // 0x001c7294: addu $a1, $t0, $a1
    a0 = a0 + 2;                                                // 0x001c7298: addiu $a0, $a0, 2
    if (v0 != 0) goto label_0x1c72a8;                           // 0x001c729c: bnez $v0, 0x1c72a8
    t0 = a1 & 0xffff;                                           // 0x001c72a0: andi $t0, $a1, 0xffff
label_0x1c72a8:
    a1 = t1 & 0xffff;                                           // 0x001c72a8: andi $a1, $t1, 0xffff
    t2 = t2 + 1;                                                // 0x001c72ac: addiu $t2, $t2, 1
    v0 = a1 << 2;                                               // 0x001c72b0: sll $v0, $a1, 2
    v0 = v0 + a1;                                               // 0x001c72b4: addu $v0, $v0, $a1
    v0 = v0 << 1;                                               // 0x001c72b8: sll $v0, $v0, 1
    v0 = v0 + a1;                                               // 0x001c72bc: addu $v0, $v0, $a1
    v0 = v0 << 4;                                               // 0x001c72c0: sll $v0, $v0, 4
    /* divide: v0 / v1 -> hi:lo */                              // 0x001c72c4: div $zero, $v0, $v1
    /* nop */                                                   // 0x001c72c8: nop 
    /* nop */                                                   // 0x001c72cc: nop 
    /* mfhi $v0 */                                              // 0x001c72d0
    t1 = v0 & 0xffff;                                           // 0x001c72d4: andi $t1, $v0, 0xffff
label_0x1c72d8:
    v0 = (t2 < a2) ? 1 : 0;                                     // 0x001c72d8: slt $v0, $t2, $a2
    if (v0 != 0) goto label_0x1c7280;                           // 0x001c72dc: bnez $v0, 0x1c7280
    /* nop */                                                   // 0x001c72e0: nop 
    v1 = *(uint16_t*)((a3) + 4);                                // 0x001c72e4: lhu $v1, 4($a3)
    v0 = t0 & 0xffff;                                           // 0x001c72e8: andi $v0, $t0, 0xffff
    if (v1 == v0) goto label_0x1c72fc;                          // 0x001c72ec: beq $v1, $v0, 0x1c72fc
    goto label_0x1c72fc;                                        // 0x001c72f4: b 0x1c72fc
    v0 = -2;                                                    // 0x001c72f8: addiu $v0, $zero, -2
label_0x1c72fc:
label_0x1c7300:
    return;                                                     // 0x001c7300: jr $ra
    sp = sp + 0x10;                                             // 0x001c7304: addiu $sp, $sp, 0x10
}