void func_001d7470() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = a0 & 0xff;                                             // 0x001d7470: andi $a3, $a0, 0xff
    sp = sp + -0x40;                                            // 0x001d7474: addiu $sp, $sp, -0x40
    v1 = a3 << 6;                                               // 0x001d7478: sll $v1, $a3, 6
    a0 = a1 & 0xff;                                             // 0x001d7480: andi $a0, $a1, 0xff
    a2 = v1 + a3;                                               // 0x001d7484: addu $a2, $v1, $a3
    v1 = a0 << 2;                                               // 0x001d748c: sll $v1, $a0, 2
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d7490: addu.qb $zero, $sp, $s1
    v1 = v1 + a0;                                               // 0x001d7494: addu $v1, $v1, $a0
    a0 = a2 << 3;                                               // 0x001d749c: sll $a0, $a2, 3
    a2 = a0 + a3;                                               // 0x001d74a0: addu $a2, $a0, $a3
    a1 = 0x3c << 16;                                            // 0x001d74a8: lui $a1, 0x3c
    a0 = v1 << 2;                                               // 0x001d74ac: sll $a0, $v1, 2
    v1 = 0x35 << 16;                                            // 0x001d74b0: lui $v1, 0x35
    a1 = a1 + -0x2b00;                                          // 0x001d74b4: addiu $a1, $a1, -0x2b00
    a2 = a2 << 2;                                               // 0x001d74b8: sll $a2, $a2, 2
    v1 = v1 + 0x6ba0;                                           // 0x001d74bc: addiu $v1, $v1, 0x6ba0
    s1 = a1 + a2;                                               // 0x001d74c0: addu $s1, $a1, $a2
    v1 = v1 + a0;                                               // 0x001d74c4: addu $v1, $v1, $a0
    *(uint8_t*)(s1) = 0;                                        // 0x001d74c8: sb $zero, 0($s1)
    v1 = g_00356bac;  // Global at 0x00356bac                   // 0x001d74cc: lw $v1, 0xc($v1)
    if (v1 == 0) goto label_0x1d756c;                           // 0x001d74d0: beqz $v1, 0x1d756c
    /* nop */                                                   // 0x001d74d4: nop 
    a0 = 0x15;                                                  // 0x001d74d8: addiu $a0, $zero, 0x15
    func_001aefe0();  // 0x1aefd0                                // 0x001d74dc: jal 0x1aefd0
    a1 = 2;                                                     // 0x001d74e0: addiu $a1, $zero, 2
    a0 = 1;                                                     // 0x001d74e4: addiu $a0, $zero, 1
    func_001aefe0();  // 0x1aefd0                                // 0x001d74e8: jal 0x1aefd0
    a1 = 0x800;                                                 // 0x001d74ec: addiu $a1, $zero, 0x800
    a0 = 0x12;                                                  // 0x001d74f0: addiu $a0, $zero, 0x12
    func_001aefe0();  // 0x1aefd0                                // 0x001d74f4: jal 0x1aefd0
    a1 = 0 | 0x8000;                                            // 0x001d74f8: ori $a1, $zero, 0x8000
    a0 = 0x62;                                                  // 0x001d74fc: addiu $a0, $zero, 0x62
    func_001aefe0();  // 0x1aefd0                                // 0x001d7500: jal 0x1aefd0
    a1 = 1;                                                     // 0x001d7504: addiu $a1, $zero, 1
    a0 = 0xc;                                                   // 0x001d7508: addiu $a0, $zero, 0xc
    func_001aefe0();  // 0x1aefd0                                // 0x001d750c: jal 0x1aefd0
    a0 = 0x66;                                                  // 0x001d7514: addiu $a0, $zero, 0x66
    func_001aefe0();  // 0x1aefd0                                // 0x001d7518: jal 0x1aefd0
    a1 = 1;                                                     // 0x001d751c: addiu $a1, $zero, 1
    a0 = 2;                                                     // 0x001d7520: addiu $a0, $zero, 2
    func_001aefe0();  // 0x1aefd0                                // 0x001d7524: jal 0x1aefd0
    func_001aefe0();  // 0x1aefd0                                // 0x001d7530: jal 0x1aefd0
    v0 = 1;                                                     // 0x001d7538: addiu $v0, $zero, 1
    a0 = 0x20;                                                  // 0x001d753c: addiu $a0, $zero, 0x20
    *(uint8_t*)(s1) = v0;                                       // 0x001d7540: sb $v0, 0($s1)
    a1 = 3;                                                     // 0x001d7544: addiu $a1, $zero, 3
    func_001b28a0();  // 0x1b2780                                // 0x001d7548: jal 0x1b2780
    s2 = s1 + 4;                                                // 0x001d754c: addiu $s2, $s1, 4
    *(uint32_t*)((s2) + 0x808) = v0;                            // 0x001d7550: sw $v0, 0x808($s2)
    a0 = s0 & 0xff;                                             // 0x001d7554: andi $a0, $s0, 0xff
    a1 = -1;                                                    // 0x001d755c: addiu $a1, $zero, -1
    a3 = 3;                                                     // 0x001d7560: addiu $a3, $zero, 3
    func_001d5070();  // 0x1d4f30                                // 0x001d7564: jal 0x1d4f30
    *(uint32_t*)((s2) + 0x818) = 0;                             // 0x001d7568: sw $zero, 0x818($s2)
label_0x1d756c:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d7570: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d7574: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d7578: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d757c: jr $ra
    sp = sp + 0x40;                                             // 0x001d7580: addiu $sp, $sp, 0x40
}