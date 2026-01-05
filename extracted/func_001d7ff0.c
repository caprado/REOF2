void func_001d7ff0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x001d7ff0: addiu $sp, $sp, -0x80
    a0 = 0x2400;                                                // 0x001d7ff4: addiu $a0, $zero, 0x2400
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d8000: addu.qb $zero, $sp, $s1
    func_001d3c20();  // 1d3c20                                // 0x001d8004: jal 0x1d3c20
    a0 = 0x15;                                                  // 0x001d800c: addiu $a0, $zero, 0x15
    func_001aefd0();  // 1aefd0                                // 0x001d8010: jal 0x1aefd0
    a1 = 2;                                                     // 0x001d8014: addiu $a1, $zero, 2
    a0 = 1;                                                     // 0x001d8018: addiu $a0, $zero, 1
    func_001aefd0();  // 1aefd0                                // 0x001d801c: jal 0x1aefd0
    a0 = 0x12;                                                  // 0x001d8024: addiu $a0, $zero, 0x12
    func_001aefd0();  // 1aefd0                                // 0x001d8028: jal 0x1aefd0
    a0 = 0x62;                                                  // 0x001d8030: addiu $a0, $zero, 0x62
    func_001aefd0();  // 1aefd0                                // 0x001d8034: jal 0x1aefd0
    a1 = 1;                                                     // 0x001d8038: addiu $a1, $zero, 1
    a0 = 0xc;                                                   // 0x001d803c: addiu $a0, $zero, 0xc
    func_001aefd0();  // 1aefd0                                // 0x001d8040: jal 0x1aefd0
    a0 = 0x66;                                                  // 0x001d8048: addiu $a0, $zero, 0x66
    func_001aefd0();  // 1aefd0                                // 0x001d804c: jal 0x1aefd0
    a0 = 2;                                                     // 0x001d8054: addiu $a0, $zero, 2
    func_001aefd0();  // 1aefd0                                // 0x001d8058: jal 0x1aefd0
    a0 = 0x12;                                                  // 0x001d8060: addiu $a0, $zero, 0x12
    func_001aefd0();  // 1aefd0                                // 0x001d8064: jal 0x1aefd0
    func_001aefd0();  // 1aefd0                                // 0x001d8070: jal 0x1aefd0
    a0 = sp + 0x60;                                             // 0x001d8078: addiu $a0, $sp, 0x60
    func_00107c70();  // 107c70                                // 0x001d8080: jal 0x107c70
    a2 = 0x20;                                                  // 0x001d8084: addiu $a2, $zero, 0x20
    at = 0x31 << 16;                                            // 0x001d8088: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001d808c: lui $a1, 0x24
    s0 = g_003137ba;  // Global at 0x003137ba                   // 0x001d8090: lhu $s0, 0x37ba($at)
    a0 = sp + 0x60;                                             // 0x001d8094: addiu $a0, $sp, 0x60
    a1 = &str_00247640;  // "data\\rom\\etc\\defdat%02d.bin"    // 0x001d8098: addiu $a1, $a1, 0x7640
    func_0010a4d8();  // 10a4d8                                // 0x001d809c: jal 0x10a4d8
    a1 = 0x24 << 16;                                            // 0x001d80a4: lui $a1, 0x24
    a0 = sp + 0x40;                                             // 0x001d80a8: addiu $a0, $sp, 0x40
    a1 = &str_00247650;  // "defdat%02d.bin"                    // 0x001d80ac: addiu $a1, $a1, 0x7650
    func_0010a4d8();  // 10a4d8                                // 0x001d80b0: jal 0x10a4d8
    at = 0x31 << 16;                                            // 0x001d80b8: lui $at, 0x31
    v0 = 0x2f << 16;                                            // 0x001d80bc: lui $v0, 0x2f
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001d80c0: lw $v1, 0x37fc($at)
    v0 = v0 | 0xf000;                                           // 0x001d80c4: ori $v0, $v0, 0xf000
    a0 = 0x200;                                                 // 0x001d80c8: addiu $a0, $zero, 0x200
    a1 = 0xa;                                                   // 0x001d80cc: addiu $a1, $zero, 0xa
    func_001b2780();  // 1b2780                                // 0x001d80d0: jal 0x1b2780
    s1 = v1 + v0;                                               // 0x001d80d4: addu $s1, $v1, $v0
    *(uint32_t*)((s1) + 0x808) = v0;                            // 0x001d80d8: sw $v0, 0x808($s1)
    at = 0x31 << 16;                                            // 0x001d80dc: lui $at, 0x31
    *(uint32_t*)((s1) + 0x818) = 0;                             // 0x001d80e0: sw $zero, 0x818($s1)
    v0 = 0x30 << 16;                                            // 0x001d80e4: lui $v0, 0x30
    a0 = g_003137fc;  // Global at 0x003137fc                   // 0x001d80e8: lw $a0, 0x37fc($at)
    v1 = v0 | 0x1000;                                           // 0x001d80ec: ori $v1, $v0, 0x1000
    v0 = v0 | 0x1100;                                           // 0x001d80f0: ori $v0, $v0, 0x1100
    s2 = a0 + v1;                                               // 0x001d80f4: addu $s2, $a0, $v1
    at = 0x31 << 16;                                            // 0x001d80f8: lui $at, 0x31
    *(uint32_t*)((s2) + 0x18) = s1;                             // 0x001d80fc: sw $s1, 0x18($s2)
    *(uint32_t*)((s2) + 0x20) = 0;                              // 0x001d8100: sw $zero, 0x20($s2)
    *(uint32_t*)((s2) + 0x24) = 0;                              // 0x001d8104: sw $zero, 0x24($s2)
    v1 = g_003137fc;  // Global at 0x003137fc                   // 0x001d8108: lw $v1, 0x37fc($at)
    v0 = v1 + v0;                                               // 0x001d810c: addu $v0, $v1, $v0
    at = 0x31 << 16;                                            // 0x001d8110: lui $at, 0x31
    *(uint32_t*)((s2) + 0x1c) = v0;                             // 0x001d8114: sw $v0, 0x1c($s2)
    v0 = g_003137b7;  // Global at 0x003137b7                   // 0x001d8118: lb $v0, 0x37b7($at)
    if (v0 != 0) goto label_0x1d8140;                           // 0x001d811c: bnez $v0, 0x1d8140
    at = 0x31 << 16;                                            // 0x001d8120: lui $at, 0x31
    a0 = g_003137ba;  // Global at 0x003137ba                   // 0x001d8128: lhu $a0, 0x37ba($at)
    a1 = -1;                                                    // 0x001d812c: addiu $a1, $zero, -1
    func_001d4db0();  // 1d4db0                                // 0x001d8130: jal 0x1d4db0
    a3 = 2;                                                     // 0x001d8134: addiu $a3, $zero, 2
    goto label_0x1d8170;                                        // 0x001d8138: b 0x1d8170
    a1 = *(int32_t*)((s2) + 0x1c);                              // 0x001d813c: lw $a1, 0x1c($s2)
label_0x1d8140:
    v0 = 1 << 16;                                               // 0x001d8140: lui $v0, 1
    a0 = sp + 0x60;                                             // 0x001d8148: addiu $a0, $sp, 0x60
    a2 = 0x2400;                                                // 0x001d814c: addiu $a2, $zero, 0x2400
    func_001aa480();  // 1aa480                                // 0x001d8150: jal 0x1aa480
    a3 = v0 | 2;                                                // 0x001d8154: ori $a3, $v0, 2
    a1 = 0x24 << 16;                                            // 0x001d8158: lui $a1, 0x24
    a0 = sp + 0x40;                                             // 0x001d8160: addiu $a0, $sp, 0x40
    func_0010a4d8();  // 10a4d8                                // 0x001d8164: jal 0x10a4d8
    a1 = &str_00247670;  // "data\\rom\\motion\\player\\sp_%03d.bin" // 0x001d8168: addiu $a1, $a1, 0x7670
    a1 = *(int32_t*)((s2) + 0x1c);                              // 0x001d816c: lw $a1, 0x1c($s2)
label_0x1d8170:
    v0 = 1 << 16;                                               // 0x001d8170: lui $v0, 1
    a0 = sp + 0x40;                                             // 0x001d8174: addiu $a0, $sp, 0x40
    func_001d3390();  // 1d3390                                // 0x001d817c: jal 0x1d3390
    a2 = v0 | 1;                                                // 0x001d8180: ori $a2, $v0, 1
    at = 0x31 << 16;                                            // 0x001d8184: lui $at, 0x31
    v1 = 0x30 << 16;                                            // 0x001d8188: lui $v1, 0x30
    a0 = g_003137fc;  // Global at 0x003137fc                   // 0x001d818c: lw $a0, 0x37fc($at)
    v1 = v1 | 0x1500;                                           // 0x001d8190: ori $v1, $v1, 0x1500
    v1 = a0 + v1;                                               // 0x001d8194: addu $v1, $a0, $v1
    *(uint32_t*)((s2) + 0x1c) = v1;                             // 0x001d8198: sw $v1, 0x1c($s2)
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d81a0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d81a4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d81a8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d81ac: jr $ra
    sp = sp + 0x80;                                             // 0x001d81b0: addiu $sp, $sp, 0x80
}