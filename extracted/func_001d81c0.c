void func_001d81c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x001d81c0: addiu $sp, $sp, -0x50
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d81c8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d81d4: addu.qb $zero, $sp, $s1
    s0 = a1 & 0xff;                                             // 0x001d81dc: andi $s0, $a1, 0xff
    v0 = s0 << 3;                                               // 0x001d81e0: sll $v0, $s0, 3
    func_001d3c20();  // 1d3c20                                // 0x001d81e4: jal 0x1d3c20
    a0 = v0 + 0x3000;                                           // 0x001d81e8: addiu $a0, $v0, 0x3000
    a0 = 0x15;                                                  // 0x001d81ec: addiu $a0, $zero, 0x15
    func_001aefd0();  // 1aefd0                                // 0x001d81f0: jal 0x1aefd0
    a1 = 2;                                                     // 0x001d81f4: addiu $a1, $zero, 2
    a0 = 1;                                                     // 0x001d81f8: addiu $a0, $zero, 1
    func_001aefd0();  // 1aefd0                                // 0x001d81fc: jal 0x1aefd0
    a1 = 0x800;                                                 // 0x001d8200: addiu $a1, $zero, 0x800
    a0 = 0x12;                                                  // 0x001d8204: addiu $a0, $zero, 0x12
    func_001aefd0();  // 1aefd0                                // 0x001d8208: jal 0x1aefd0
    a1 = 0 | 0x8000;                                            // 0x001d820c: ori $a1, $zero, 0x8000
    a0 = 0x62;                                                  // 0x001d8210: addiu $a0, $zero, 0x62
    func_001aefd0();  // 1aefd0                                // 0x001d8214: jal 0x1aefd0
    a0 = 0xc;                                                   // 0x001d821c: addiu $a0, $zero, 0xc
    func_001aefd0();  // 1aefd0                                // 0x001d8220: jal 0x1aefd0
    a1 = 1;                                                     // 0x001d8224: addiu $a1, $zero, 1
    a0 = 0x66;                                                  // 0x001d8228: addiu $a0, $zero, 0x66
    func_001aefd0();  // 1aefd0                                // 0x001d822c: jal 0x1aefd0
    a0 = 2;                                                     // 0x001d8234: addiu $a0, $zero, 2
    func_001aefd0();  // 1aefd0                                // 0x001d8238: jal 0x1aefd0
    func_001aefd0();  // 1aefd0                                // 0x001d8244: jal 0x1aefd0
    a0 = 8;                                                     // 0x001d824c: addiu $a0, $zero, 8
    a1 = 0xb;                                                   // 0x001d8250: addiu $a1, $zero, 0xb
    func_001b2780();  // 1b2780                                // 0x001d8254: jal 0x1b2780
    s1 = s3 + 0x70;                                             // 0x001d8258: addiu $s1, $s3, 0x70
    *(uint32_t*)((s1) + 0x808) = v0;                            // 0x001d825c: sw $v0, 0x808($s1)
    at = 0x31 << 16;                                            // 0x001d8260: lui $at, 0x31
    v0 = s3 + 0x890;                                            // 0x001d8264: addiu $v0, $s3, 0x890
    *(uint32_t*)(s1) = v0;                                      // 0x001d8268: sw $v0, 0($s1)
    v0 = s3 + 0x910;                                            // 0x001d826c: addiu $v0, $s3, 0x910
    *(uint32_t*)((s1) + 0x818) = v0;                            // 0x001d8270: sw $v0, 0x818($s1)
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001d8274: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1d829c;                           // 0x001d8278: bnez $v0, 0x1d829c
    a1 = -1;                                                    // 0x001d8288: addiu $a1, $zero, -1
    func_001d4db0();  // 1d4db0                                // 0x001d828c: jal 0x1d4db0
    a3 = 3;                                                     // 0x001d8290: addiu $a3, $zero, 3
    goto label_0x1d82b0;                                        // 0x001d8294: b 0x1d82b0
label_0x1d829c:
    func_001aa480();  // 1aa480                                // 0x001d82a4: jal 0x1aa480
    a3 = 3;                                                     // 0x001d82a8: addiu $a3, $zero, 3
label_0x1d82b0:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d82b4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d82b8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d82bc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d82c0: jr $ra
    sp = sp + 0x50;                                             // 0x001d82c4: addiu $sp, $sp, 0x50
}