void func_0011f490() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x0011f490: addiu $sp, $sp, -0x50
    if (a0 == 0) goto label_0x11f4c0;                           // 0x0011f4a8: beqz $a0, 0x11f4c0
    v0 = 0x25 << 16;                                            // 0x0011f4b0: lui $v0, 0x25
    v1 = 0x20;                                                  // 0x0011f4b4: addiu $v1, $zero, 0x20
    goto label_0x11f4d0;                                        // 0x0011f4b8: b 0x11f4d0
    v0 = v0 + 0x3488;                                           // 0x0011f4bc: addiu $v0, $v0, 0x3488
label_0x11f4c0:
    v0 = 0x1f << 16;                                            // 0x0011f4c0: lui $v0, 0x1f
    v1 = 0x1f << 16;                                            // 0x0011f4c4: lui $v1, 0x1f
    v0 = g_001f1a08;  // Global at 0x001f1a08                   // 0x0011f4c8: lw $v0, 0x1a08($v0)
    v1 = g_001f1a0c;  // Global at 0x001f1a0c                   // 0x0011f4cc: lw $v1, 0x1a0c($v1)
label_0x11f4d0:
    if (v1 <= 0) goto label_0x11f514;                           // 0x0011f4d4: blez $v1, 0x11f514
label_0x11f4e0:
    v0 = *(int32_t*)(s0);                                       // 0x0011f4e0: lw $v0, 0($s0)
    /* beqzl $v0, 0x11f50c */                                   // 0x0011f4e4: beqzl $v0, 0x11f50c
    s1 = s1 + -1;                                               // 0x0011f4e8: addiu $s1, $s1, -1
    v0 = *(int32_t*)((s0) + 8);                                 // 0x0011f4ec: lw $v0, 8($s0)
    a2 = *(int32_t*)(s0);                                       // 0x0011f4f8: lw $a2, 0($s0)
    /* call function at address in a2 */                        // 0x0011f500: jalr $a2
    a1 = *(int32_t*)((s0) + 4);                                 // 0x0011f504: lw $a1, 4($s0)
    s1 = s1 + -1;                                               // 0x0011f508: addiu $s1, $s1, -1
    if (s1 != 0) goto label_0x11f4e0;                           // 0x0011f50c: bnez $s1, 0x11f4e0
    s0 = s0 + 0x10;                                             // 0x0011f510: addiu $s0, $s0, 0x10
label_0x11f514:
    return;                                                     // 0x0011f530: jr $ra
    sp = sp + 0x50;                                             // 0x0011f534: addiu $sp, $sp, 0x50
}