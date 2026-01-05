void func_001d08a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001d08a0: addiu $sp, $sp, -0x30
    v1 = 1 << 16;                                               // 0x001d08a4: lui $v1, 1
    v1 = v1 | 0x863c;                                           // 0x001d08ac: ori $v1, $v1, 0x863c
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d08b0: addu.qb $zero, $sp, $s1
    at = 0x33 << 16;                                            // 0x001d08b4: lui $at, 0x33
    a0 = *(int32_t*)((gp) + -0x6260);                           // 0x001d08c0: lw $a0, -0x6260($gp)
    g_0032be38 = v1;  // Global at 0x0032be38                   // 0x001d08c4: sw $v1, -0x41c8($at)
    v1 = 3;                                                     // 0x001d08c8: addiu $v1, $zero, 3
    a0 = g_0032be30;  // Global at 0x0032be30                   // 0x001d08cc: lw $a0, 0($a0)
    if (a0 == v1) goto label_0x1d08ec;                          // 0x001d08d0: beq $a0, $v1, 0x1d08ec
    v1 = 2;                                                     // 0x001d08d8: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x1d08ec;                          // 0x001d08dc: beq $a0, $v1, 0x1d08ec
    /* nop */                                                   // 0x001d08e0: nop 
    goto label_0x1d08f8;                                        // 0x001d08e4: b 0x1d08f8
    /* nop */                                                   // 0x001d08e8: nop 
label_0x1d08ec:
    a0 = 0x33 << 16;                                            // 0x001d08ec: lui $a0, 0x33
    func_001c9b00();  // 1c9b00                                // 0x001d08f0: jal 0x1c9b00
    a0 = a0 + -0x41d0;                                          // 0x001d08f4: addiu $a0, $a0, -0x41d0
label_0x1d08f8:
    at = 0x33 << 16;                                            // 0x001d08f8: lui $at, 0x33
    v1 = 0x64;                                                  // 0x001d08fc: addiu $v1, $zero, 0x64
    g_0032ce80 = s1;  // Global at 0x0032ce80                   // 0x001d0900: sb $s1, -0x3180($at)
    at = 0x33 << 16;                                            // 0x001d0904: lui $at, 0x33
    g_0032ce81 = s0;  // Global at 0x0032ce81                   // 0x001d0908: sb $s0, -0x317f($at)
    at = 0x33 << 16;                                            // 0x001d090c: lui $at, 0x33
    g_0032ce82 = 0;  // Global at 0x0032ce82                    // 0x001d0910: sb $zero, -0x317e($at)
    at = 0x33 << 16;                                            // 0x001d0914: lui $at, 0x33
    g_0032ce83 = 0;  // Global at 0x0032ce83                    // 0x001d0918: sb $zero, -0x317d($at)
    at = 0x33 << 16;                                            // 0x001d091c: lui $at, 0x33
    g_0032ce84 = 0;  // Global at 0x0032ce84                    // 0x001d0920: sh $zero, -0x317c($at)
    at = 0x33 << 16;                                            // 0x001d0924: lui $at, 0x33
    g_0032ce86 = 0;  // Global at 0x0032ce86                    // 0x001d0928: sh $zero, -0x317a($at)
    at = 0x33 << 16;                                            // 0x001d092c: lui $at, 0x33
    g_0032ce88 = 0;  // Global at 0x0032ce88                    // 0x001d0930: sh $zero, -0x3178($at)
    at = 0x33 << 16;                                            // 0x001d0934: lui $at, 0x33
    g_0032ce8a = 0;  // Global at 0x0032ce8a                    // 0x001d0938: sh $zero, -0x3176($at)
    at = 0x33 << 16;                                            // 0x001d093c: lui $at, 0x33
    g_0032ce8c = 0;  // Global at 0x0032ce8c                    // 0x001d0940: sh $zero, -0x3174($at)
    at = 0x33 << 16;                                            // 0x001d0944: lui $at, 0x33
    g_0032ce8e = 0;  // Global at 0x0032ce8e                    // 0x001d0948: sh $zero, -0x3172($at)
    at = 0x33 << 16;                                            // 0x001d094c: lui $at, 0x33
    g_0032ce90 = 0;  // Global at 0x0032ce90                    // 0x001d0950: sh $zero, -0x3170($at)
    at = 0x33 << 16;                                            // 0x001d0954: lui $at, 0x33
    a0 = g_0032be38;  // Global at 0x0032be38                   // 0x001d0958: lw $a0, -0x41c8($at)
    /* divide: a0 / v1 -> hi:lo */                              // 0x001d095c: div $zero, $a0, $v1
    at = 0x33 << 16;                                            // 0x001d0960: lui $at, 0x33
    /* nop */                                                   // 0x001d0964: nop 
    /* mflo $v1 */                                              // 0x001d0968
    g_0032ce92 = v1;  // Global at 0x0032ce92                   // 0x001d096c: sh $v1, -0x316e($at)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d0974: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d0978: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d097c: jr $ra
    sp = sp + 0x30;                                             // 0x001d0980: addiu $sp, $sp, 0x30
}