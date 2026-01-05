void func_001d9170() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x180;                                           // 0x001d9170: addiu $sp, $sp, -0x180
    a1 = 0x24 << 16;                                            // 0x001d9174: lui $a1, 0x24
    at = 0x31 << 16;                                            // 0x001d917c: lui $at, 0x31
    v0 = 0x10 << 16;                                            // 0x001d9184: lui $v0, 0x10
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001d9188: subu.qb $zero, $sp, $s5
    a1 = &str_00247810;  // "data\\rom\\scene\\pit_tex\\cockpit.tex" // 0x001d918c: addiu $a1, $a1, 0x7810
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d9194: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d919c: addu.qb $zero, $sp, $s1
    a0 = sp + 0x80;                                             // 0x001d91a8: addiu $a0, $sp, 0x80
    s1 = g_003137fc;  // Global at 0x003137fc                   // 0x001d91ac: lw $s1, 0x37fc($at)
    func_0010ac68();  // 10ac68                                // 0x001d91b0: jal 0x10ac68
    s0 = s1 + v0;                                               // 0x001d91b4: addu $s0, $s1, $v0
    a0 = sp + 0x80;                                             // 0x001d91b8: addiu $a0, $sp, 0x80
    a2 = 1;                                                     // 0x001d91c0: addiu $a2, $zero, 1
    func_001d3390();  // 1d3390                                // 0x001d91c4: jal 0x1d3390
    if (v0 == 0) goto label_0x1d9230;                           // 0x001d91cc: beqz $v0, 0x1d9230
    /* nop */                                                   // 0x001d91d0: nop 
    s6 = *(int32_t*)((s1) + 4);                                 // 0x001d91d4: lw $s6, 4($s1)
    s5 = s1 + 8;                                                // 0x001d91d8: addiu $s5, $s1, 8
    s4 = 1;                                                     // 0x001d91dc: addiu $s4, $zero, 1
    goto label_0x1d9220;                                        // 0x001d91e0: b 0x1d9220
label_0x1d91e8:
    v0 = *(int32_t*)(s5);                                       // 0x001d91e8: lw $v0, 0($s5)
    a0 = s1 + v0;                                               // 0x001d91f0: addu $a0, $s1, $v0
    func_001aee20();  // 1aee20                                // 0x001d91f4: jal 0x1aee20
    s5 = s5 + 8;                                                // 0x001d91f8: addiu $s5, $s5, 8
    func_001d3600();  // 1d3600                                // 0x001d9200: jal 0x1d3600
    func_001d3cb0();  // 1d3cb0                                // 0x001d9208: jal 0x1d3cb0
    *(uint32_t*)(s2) = v0;                                      // 0x001d9210: sw $v0, 0($s2)
    s4 = s4 + 1;                                                // 0x001d9214: addiu $s4, $s4, 1
    s2 = s2 + 4;                                                // 0x001d9218: addiu $s2, $s2, 4
    s3 = s3 + 1;                                                // 0x001d921c: addiu $s3, $s3, 1
label_0x1d9220:
    v1 = s6 + -1;                                               // 0x001d9220: addiu $v1, $s6, -1
    v1 = (s3 < v1) ? 1 : 0;                                     // 0x001d9224: slt $v1, $s3, $v1
    if (v1 != 0) goto label_0x1d91e8;                           // 0x001d9228: bnez $v1, 0x1d91e8
    /* nop */                                                   // 0x001d922c: nop 
label_0x1d9230:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001d9234: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001d9238: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d923c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d9244: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d9248: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d924c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d9250: jr $ra
    sp = sp + 0x180;                                            // 0x001d9254: addiu $sp, $sp, 0x180
}