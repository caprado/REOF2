void func_001b2f90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xe0;                                            // 0x001b2f90: addiu $sp, $sp, -0xe0
    a1 = 1;                                                     // 0x001b2f94: addiu $a1, $zero, 1
    /* FPU: subu.qb $zero, $sp, $s4 */                          // 0x001b2fa0: subu.qb $zero, $sp, $s4
    /* FPU: dpa.w.ph $ac0, $sp, $s2 */                          // 0x001b2fa8: dpa.w.ph $ac0, $sp, $s2
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x001b2fb0: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x001b2fb4: swc1 $f20, 0($sp)
    /* FPU: mov.s $f20, $f12 */                                 // 0x001b2fbc: mov.s $f20, $f12
    func_001aefe0();  // 0x1aefd0                                // 0x001b2fc0: jal 0x1aefd0
    a0 = 0x6c;                                                  // 0x001b2fc4: addiu $a0, $zero, 0x6c
    a0 = sp + 0x80;                                             // 0x001b2fc8: addiu $a0, $sp, 0x80
    func_00191df0();  // 0x191db0                                // 0x001b2fcc: jal 0x191db0
    func_001aefe0();  // 0x1aefd0                                // 0x001b2fd8: jal 0x1aefd0
    a0 = 0x1a;                                                  // 0x001b2fdc: addiu $a0, $zero, 0x1a
    s4 = sp + 0xc4;                                             // 0x001b2fe4: addiu $s4, $sp, 0xc4
    s3 = sp + 0xc8;                                             // 0x001b2fe8: addiu $s3, $sp, 0xc8
    s2 = sp + 0xcc;                                             // 0x001b2fec: addiu $s2, $sp, 0xcc
    s1 = sp + 0xdc;                                             // 0x001b2ff0: addiu $s1, $sp, 0xdc
    s0 = sp + 0xd8;                                             // 0x001b2ff4: addiu $s0, $sp, 0xd8
    v0 = s5 << 1;                                               // 0x001b2ff8: sll $v0, $s5, 1
label_0x1b2ffc:
    a0 = 0x22 << 16;                                            // 0x001b2ffc: lui $a0, 0x22
    v0 = v0 + s5;                                               // 0x001b3000: addu $v0, $v0, $s5
    a0 = a0 + -0x3e50;                                          // 0x001b3004: addiu $a0, $a0, -0x3e50
    a1 = v0 << 3;                                               // 0x001b3008: sll $a1, $v0, 3
    v1 = sp + 0xc0;                                             // 0x001b300c: addiu $v1, $sp, 0xc0
    a0 = a0 + a1;                                               // 0x001b3010: addu $a0, $a0, $a1
    v0 = 2;                                                     // 0x001b3014: addiu $v0, $zero, 2
    FPU_F2 = *(float*)(a0);  // Load float                      // 0x001b3018: lwc1 $f2, 0($a0)
    FPU_F1 = *(float*)((a0) + 4);  // Load float                // 0x001b301c: lwc1 $f1, 4($a0)
    FPU_F0 = *(float*)((a0) + 8);  // Load float                // 0x001b3020: lwc1 $f0, 8($a0)
    *(float*)(v1) = FPU_F2;  // Store float                     // 0x001b3024: swc1 $f2, 0($v1)
    *(float*)((v1) + 4) = FPU_F1;  // Store float               // 0x001b3028: swc1 $f1, 4($v1)
    *(float*)((v1) + 8) = FPU_F0;  // Store float               // 0x001b302c: swc1 $f0, 8($v1)
    FPU_F0 = *(float*)((sp) + 0xc0);  // Load float             // 0x001b3030: lwc1 $f0, 0xc0($sp)
    /* FPU: mul.s $f0, $f0, $f20 */                             // 0x001b3034: mul.s $f0, $f0, $f20
    *(float*)((sp) + 0xc0) = FPU_F0;  // Store float            // 0x001b3038: swc1 $f0, 0xc0($sp)
    FPU_F0 = *(float*)(s4);  // Load float                      // 0x001b303c: lwc1 $f0, 0($s4)
    /* FPU: mul.s $f0, $f0, $f20 */                             // 0x001b3040: mul.s $f0, $f0, $f20
    *(float*)(s4) = FPU_F0;  // Store float                     // 0x001b3044: swc1 $f0, 0($s4)
    FPU_F0 = *(float*)(s3);  // Load float                      // 0x001b3048: lwc1 $f0, 0($s3)
    /* FPU: mul.s $f0, $f0, $f20 */                             // 0x001b304c: mul.s $f0, $f0, $f20
    *(float*)(s3) = FPU_F0;  // Store float                     // 0x001b3050: swc1 $f0, 0($s3)
    FPU_F2 = *(float*)((a0) + 0xc);  // Load float              // 0x001b3054: lwc1 $f2, 0xc($a0)
    FPU_F1 = *(float*)((a0) + 0x10);  // Load float             // 0x001b3058: lwc1 $f1, 0x10($a0)
    FPU_F0 = *(float*)((a0) + 0x14);  // Load float             // 0x001b305c: lwc1 $f0, 0x14($a0)
    *(float*)(s2) = FPU_F2;  // Store float                     // 0x001b3060: swc1 $f2, 0($s2)
    *(float*)((s2) + 4) = FPU_F1;  // Store float               // 0x001b3064: swc1 $f1, 4($s2)
    if (s5 == v0) goto label_0x1b30a8;                          // 0x001b3068: beq $s5, $v0, 0x1b30a8
    *(float*)((s2) + 8) = FPU_F0;  // Store float               // 0x001b306c: swc1 $f0, 8($s2)
    v0 = 1;                                                     // 0x001b3070: addiu $v0, $zero, 1
    if (s5 == v0) goto label_0x1b3098;                          // 0x001b3074: beq $s5, $v0, 0x1b3098
    v0 = 0x8000 << 16;                                          // 0x001b3078: lui $v0, 0x8000
    if (s5 == 0) goto label_0x1b308c;                           // 0x001b307c: beqz $s5, 0x1b308c
    v0 = 0x80ff << 16;                                          // 0x001b3080: lui $v0, 0x80ff
    goto label_0x1b30bc;                                        // 0x001b3084: b 0x1b30bc
    v1 = *(int32_t*)(s1);                                       // 0x001b3088: lw $v1, 0($s1)
label_0x1b308c:
    *(uint32_t*)(s1) = v0;                                      // 0x001b308c: sw $v0, 0($s1)
    goto label_0x1b30b8;                                        // 0x001b3090: b 0x1b30b8
    *(uint32_t*)(s0) = v0;                                      // 0x001b3094: sw $v0, 0($s0)
label_0x1b3098:
    v0 = v0 | 0xff00;                                           // 0x001b3098: ori $v0, $v0, 0xff00
    *(uint32_t*)(s1) = v0;                                      // 0x001b309c: sw $v0, 0($s1)
    goto label_0x1b30b8;                                        // 0x001b30a0: b 0x1b30b8
    *(uint32_t*)(s0) = v0;                                      // 0x001b30a4: sw $v0, 0($s0)
label_0x1b30a8:
    v0 = 0x8000 << 16;                                          // 0x001b30a8: lui $v0, 0x8000
    v0 = v0 | 0xff;                                             // 0x001b30ac: ori $v0, $v0, 0xff
    *(uint32_t*)(s1) = v0;                                      // 0x001b30b0: sw $v0, 0($s1)
    *(uint32_t*)(s0) = v0;                                      // 0x001b30b4: sw $v0, 0($s0)
label_0x1b30b8:
    v1 = *(int32_t*)(s1);                                       // 0x001b30b8: lw $v1, 0($s1)
label_0x1b30bc:
    v0 = 0x7f << 16;                                            // 0x001b30bc: lui $v0, 0x7f
    v0 = v0 | 0x7f7f;                                           // 0x001b30c0: ori $v0, $v0, 0x7f7f
    a0 = sp + 0xc0;                                             // 0x001b30c4: addiu $a0, $sp, 0xc0
    v0 = v1 | v0;                                               // 0x001b30c8: or $v0, $v1, $v0
    func_001953a0();  // 0x195040                                // 0x001b30cc: jal 0x195040
    *(uint32_t*)(s1) = v0;                                      // 0x001b30d0: sw $v0, 0($s1)
    s5 = s5 + 1;                                                // 0x001b30d4: addiu $s5, $s5, 1
    v0 = ((unsigned)s5 < (unsigned)3) ? 1 : 0;                  // 0x001b30d8: sltiu $v0, $s5, 3
    if (v0 != 0) goto label_0x1b2ffc;                           // 0x001b30dc: bnez $v0, 0x1b2ffc
    v0 = s5 << 1;                                               // 0x001b30e0: sll $v0, $s5, 1
    a1 = sp + 0x80;                                             // 0x001b30e4: addiu $a1, $sp, 0x80
    func_001aefe0();  // 0x1aefd0                                // 0x001b30e8: jal 0x1aefd0
    a0 = 0x1a;                                                  // 0x001b30ec: addiu $a0, $zero, 0x1a
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x001b30f4: lwc1 $f20, 0($sp)
    /* FPU: ld.b $w1, -0x4b($zero) */                           // 0x001b30f8: ld.b $w1, -0x4b($zero)
    /* FPU: aver_u.h $w1, $w0, $w20 */                          // 0x001b30fc: aver_u.h $w1, $w0, $w20
    /* FPU: xori.b $w1, $w0, 0xb3 */                            // 0x001b3100: xori.b $w1, $w0, 0xb3
    /* FPU: ld.b $w0, -0x4f($zero) */                           // 0x001b3108: ld.b $w0, -0x4f($zero)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x001b310c: aver_u.h $w0, $w0, $w16
    return;                                                     // 0x001b3110: jr $ra
    sp = sp + 0xe0;                                             // 0x001b3114: addiu $sp, $sp, 0xe0
}