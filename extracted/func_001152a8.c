void func_001152a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001152a8: addiu $sp, $sp, -0x20
    v1 = -0x2f;                                                 // 0x001152b4: addiu $v1, $zero, -0x2f
    syscall();                                                  // 0x001152b8: syscall 
    if (s0 == a0) goto label_0x1152d8;                          // 0x001152c0: beq $s0, $a0, 0x1152d8
    v0 = ((unsigned)s0 < (unsigned)0x100) ? 1 : 0;              // 0x001152c4: sltiu $v0, $s0, 0x100
    ResumeThread();  // 0x114260                                // 0x001152c8: jal 0x114260
    /* nop */                                                   // 0x001152cc: nop 
    goto label_0x115334;                                        // 0x001152d0: b 0x115334
label_0x1152d8:
    if (v0 == 0) goto label_0x1152ec;                           // 0x001152d8: beqz $v0, 0x1152ec
    v0 = 0x1f << 16;                                            // 0x001152dc: lui $v0, 0x1f
    v1 = g_001f0338;  // Global at 0x001f0338                   // 0x001152e0: lw $v1, 0x338($v0)
    if (v1 != 0) goto label_0x1152f4;                           // 0x001152e4: bnez $v1, 0x1152f4
    v1 = 0x25 << 16;                                            // 0x001152e8: lui $v1, 0x25
label_0x1152ec:
    goto label_0x115330;                                        // 0x001152ec: b 0x115330
    v0 = -1;                                                    // 0x001152f0: addiu $v0, $zero, -1
label_0x1152f4:
    a1 = 0x25 << 16;                                            // 0x001152f4: lui $a1, 0x25
    v1 = v1 + -0x4248;                                          // 0x001152f8: addiu $v1, $v1, -0x4248
    a0 = g_0024bdb0;  // Global at 0x0024bdb0                   // 0x001152fc: lw $a0, -0x4250($a1)
    v0 = g_0024bdbc;  // Global at 0x0024bdbc                   // 0x00115300: lw $v0, 4($v1)
    a3 = 2;                                                     // 0x00115304: addiu $a3, $zero, 2
    v0 = v0 & 0x1ff;                                            // 0x00115308: andi $v0, $v0, 0x1ff
    a2 = v0 << 1;                                               // 0x0011530c: sll $a2, $v0, 1
    v0 = v0 + 1;                                                // 0x00115310: addiu $v0, $v0, 1
    a1 = v1 + a2;                                               // 0x00115314: addu $a1, $v1, $a2
    g_0024bdbc = v0;  // Global at 0x0024bdbc                   // 0x00115318: sw $v0, 4($v1)
    g_00250008 = a3;  // Global at 0x00250008                   // 0x0011531c: sb $a3, 8($a1)
    WaitSema();  // 0x114310                                    // 0x00115324: jal 0x114310
    g_0024bdc1 = s0;  // Global at 0x0024bdc1                   // 0x00115328: sb $s0, 9($v1)
label_0x115330:
label_0x115334:
    return;                                                     // 0x00115338: jr $ra
    sp = sp + 0x20;                                             // 0x0011533c: addiu $sp, $sp, 0x20
}