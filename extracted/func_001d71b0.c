void func_001d71b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x001d71b0: addiu $sp, $sp, -0x70
    at = 0x31 << 16;                                            // 0x001d71b4: lui $at, 0x31
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d71bc: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d71c8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d71d8: addu.qb $zero, $sp, $s1
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001d71e0: lb $v0, 0x37b7($at)
    s1 = *(uint8_t*)((a0) + 0x549);                             // 0x001d71e4: lbu $s1, 0x549($a0)
    if (v0 != 0) goto label_0x1d7270;                           // 0x001d71e8: bnez $v0, 0x1d7270
    s0 = a1 & 0xff;                                             // 0x001d71ec: andi $s0, $a1, 0xff
    v0 = *(uint16_t*)((s5) + 0xbc8);                            // 0x001d71f0: lhu $v0, 0xbc8($s5)
    if (v0 == 0) goto label_0x1d7240;                           // 0x001d71f4: beqz $v0, 0x1d7240
    v0 = 1;                                                     // 0x001d71f8: addiu $v0, $zero, 1
    v0 = 1;                                                     // 0x001d71fc: addiu $v0, $zero, 1
    if (s1 != v0) goto label_0x1d7220;                          // 0x001d7200: bne $s1, $v0, 0x1d7220
    v0 = *(uint8_t*)((s5) + 3);                                 // 0x001d7208: lbu $v0, 3($s5)
    v0 = v0 << 3;                                               // 0x001d720c: sll $v0, $v0, 3
    func_001d3c20();  // 1d3c20                                // 0x001d7210: jal 0x1d3c20
    a0 = v0 + 0x1100;                                           // 0x001d7214: addiu $a0, $v0, 0x1100
    goto label_0x1d7270;                                        // 0x001d7218: b 0x1d7270
    /* nop */                                                   // 0x001d721c: nop 
label_0x1d7220:
    v0 = *(uint8_t*)((s5) + 3);                                 // 0x001d7220: lbu $v0, 3($s5)
    v0 = v0 << 3;                                               // 0x001d7224: sll $v0, $v0, 3
    func_001d3c20();  // 1d3c20                                // 0x001d7228: jal 0x1d3c20
    a0 = v0 + 0x1000;                                           // 0x001d722c: addiu $a0, $v0, 0x1000
    v0 = *(uint16_t*)((s5) + 0xbc8);                            // 0x001d7230: lhu $v0, 0xbc8($s5)
    v0 = v0 + -1;                                               // 0x001d7234: addiu $v0, $v0, -1
    goto label_0x1d7270;                                        // 0x001d7238: b 0x1d7270
    s0 = v0 | 0x8000;                                           // 0x001d723c: ori $s0, $v0, 0x8000
label_0x1d7240:
    if (s1 != v0) goto label_0x1d7260;                          // 0x001d7240: bne $s1, $v0, 0x1d7260
    v0 = *(uint8_t*)((s5) + 3);                                 // 0x001d7248: lbu $v0, 3($s5)
    v0 = v0 << 3;                                               // 0x001d724c: sll $v0, $v0, 3
    func_001d3c20();  // 1d3c20                                // 0x001d7250: jal 0x1d3c20
    a0 = v0 + 0x1100;                                           // 0x001d7254: addiu $a0, $v0, 0x1100
    goto label_0x1d7270;                                        // 0x001d7258: b 0x1d7270
    /* nop */                                                   // 0x001d725c: nop 
label_0x1d7260:
    v0 = *(uint8_t*)((s5) + 3);                                 // 0x001d7260: lbu $v0, 3($s5)
    v0 = v0 << 3;                                               // 0x001d7264: sll $v0, $v0, 3
    func_001d3c20();  // 1d3c20                                // 0x001d7268: jal 0x1d3c20
    a0 = v0 + 0x1000;                                           // 0x001d726c: addiu $a0, $v0, 0x1000
label_0x1d7270:
    func_001d7130();  // 1d7130                                // 0x001d7270: jal 0x1d7130
    /* nop */                                                   // 0x001d7274: nop 
    v0 = 1;                                                     // 0x001d7278: addiu $v0, $zero, 1
    if (s1 != v0) goto label_0x1d7288;                          // 0x001d727c: bne $s1, $v0, 0x1d7288
    /* nop */                                                   // 0x001d7280: nop 
    s2 = s2 + 1;                                                // 0x001d7284: addiu $s2, $s2, 1
label_0x1d7288:
    a2 = *(uint8_t*)((s5) + 3);                                 // 0x001d7288: lbu $a2, 3($s5)
    v0 = s4 & 0xff;                                             // 0x001d728c: andi $v0, $s4, 0xff
    v1 = 0x1468;                                                // 0x001d7290: addiu $v1, $zero, 0x1468
    v0 = v0 << 0x10;                                            // 0x001d7294: sll $v0, $v0, 0x10
    s2 = s2 | v0;                                               // 0x001d7298: or $s2, $s2, $v0
    a0 = 0x20;                                                  // 0x001d729c: addiu $a0, $zero, 0x20
    v0 = 0x48 << 16;                                            // 0x001d72a0: lui $v0, 0x48
    v0 = v0 + 0x4530;                                           // 0x001d72a8: addiu $v0, $v0, 0x4530
    /* multiply: a2 * v1 -> hi:lo */                            // 0x001d72ac: mult $ac3, $a2, $v1
    func_001b2780();  // 1b2780                                // 0x001d72b0: jal 0x1b2780
    s2 = v0 + v1;                                               // 0x001d72b4: addu $s2, $v0, $v1
    *(uint32_t*)((s2) + 0x808) = v0;                            // 0x001d72b8: sw $v0, 0x808($s2)
    v1 = s2 + 0x820;                                            // 0x001d72bc: addiu $v1, $s2, 0x820
    *(uint32_t*)(s2) = v1;                                      // 0x001d72c0: sw $v1, 0($s2)
    at = 0x31 << 16;                                            // 0x001d72c4: lui $at, 0x31
    v1 = s2 + 0xa20;                                            // 0x001d72c8: addiu $v1, $s2, 0xa20
    *(uint32_t*)((s2) + 4) = v1;                                // 0x001d72cc: sw $v1, 4($s2)
    v1 = s2 + 0xc20;                                            // 0x001d72d0: addiu $v1, $s2, 0xc20
    *(uint32_t*)((s2) + 0x818) = v1;                            // 0x001d72d4: sw $v1, 0x818($s2)
    v1 = g_003137b7;  // Global at 0x003137b7                   // 0x001d72d8: lb $v1, 0x37b7($at)
    if (v1 != 0) goto label_0x1d731c;                           // 0x001d72dc: bnez $v1, 0x1d731c
    /* nop */                                                   // 0x001d72e0: nop 
    v0 = s3 & 0xff;                                             // 0x001d72e4: andi $v0, $s3, 0xff
    v1 = v0 << 0x10;                                            // 0x001d72ec: sll $v1, $v0, 0x10
    a1 = -1;                                                    // 0x001d72f0: addiu $a1, $zero, -1
    v0 = s1 & 7;                                                // 0x001d72f4: andi $v0, $s1, 7
    a0 = v1 | s0;                                               // 0x001d72f8: or $a0, $v1, $s0
    v0 = v0 << 0x1d;                                            // 0x001d72fc: sll $v0, $v0, 0x1d
    func_001d4db0();  // 1d4db0                                // 0x001d7300: jal 0x1d4db0
    a3 = v0 | 2;                                                // 0x001d7304: ori $a3, $v0, 2
    v1 = 1;                                                     // 0x001d7308: addiu $v1, $zero, 1
    if (s1 != v1) goto label_0x1d731c;                          // 0x001d730c: bne $s1, $v1, 0x1d731c
    func_001d7340();  // 1d7340                                // 0x001d7314: jal 0x1d7340
label_0x1d731c:
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d7320: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d7324: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d732c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d7330: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d7334: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d7338: jr $ra
    sp = sp + 0x70;                                             // 0x001d733c: addiu $sp, $sp, 0x70
}