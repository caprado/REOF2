void func_00115190() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00115190: addiu $sp, $sp, -0x20
    v1 = -0x2f;                                                 // 0x0011519c: addiu $v1, $zero, -0x2f
    syscall();                                                  // 0x001151a0: syscall 
    if (s0 == a0) goto label_0x1151c0;                          // 0x001151a8: beq $s0, $a0, 0x1151c0
    v0 = ((unsigned)s0 < (unsigned)0x100) ? 1 : 0;              // 0x001151ac: sltiu $v0, $s0, 0x100
    CancelWakeupThread();  // 0x114220                          // 0x001151b0: jal 0x114220
    /* nop */                                                   // 0x001151b4: nop 
    goto label_0x115218;                                        // 0x001151b8: b 0x115218
label_0x1151c0:
    if (v0 == 0) goto label_0x1151d4;                           // 0x001151c0: beqz $v0, 0x1151d4
    v0 = 0x1f << 16;                                            // 0x001151c4: lui $v0, 0x1f
    v1 = g_001f0338;  // Global at 0x001f0338                   // 0x001151c8: lw $v1, 0x338($v0)
    if (v1 != 0) goto label_0x1151dc;                           // 0x001151cc: bnez $v1, 0x1151dc
    v1 = 0x25 << 16;                                            // 0x001151d0: lui $v1, 0x25
label_0x1151d4:
    goto label_0x115214;                                        // 0x001151d4: b 0x115214
    v0 = -1;                                                    // 0x001151d8: addiu $v0, $zero, -1
label_0x1151dc:
    a1 = 0x25 << 16;                                            // 0x001151dc: lui $a1, 0x25
    v1 = v1 + -0x4248;                                          // 0x001151e0: addiu $v1, $v1, -0x4248
    a0 = g_0024bdb0;  // Global at 0x0024bdb0                   // 0x001151e4: lw $a0, -0x4250($a1)
    v0 = g_0024bdbc;  // Global at 0x0024bdbc                   // 0x001151e8: lw $v0, 4($v1)
    v0 = v0 & 0x1ff;                                            // 0x001151ec: andi $v0, $v0, 0x1ff
    a2 = v0 << 1;                                               // 0x001151f0: sll $a2, $v0, 1
    v0 = v0 + 1;                                                // 0x001151f4: addiu $v0, $v0, 1
    a1 = v1 + a2;                                               // 0x001151f8: addu $a1, $v1, $a2
    g_0024bdbc = v0;  // Global at 0x0024bdbc                   // 0x001151fc: sw $v0, 4($v1)
    g_00250008 = 0;  // Global at 0x00250008                    // 0x00115204: sb $zero, 8($a1)
    WaitSema();  // 0x114310                                    // 0x00115208: jal 0x114310
    g_0024bdc1 = s0;  // Global at 0x0024bdc1                   // 0x0011520c: sb $s0, 9($v1)
label_0x115214:
label_0x115218:
    return;                                                     // 0x0011521c: jr $ra
    sp = sp + 0x20;                                             // 0x00115220: addiu $sp, $sp, 0x20
}