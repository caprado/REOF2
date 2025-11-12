void func_00115228() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00115228: addiu $sp, $sp, -0x20
    v0 = ((unsigned)s0 < (unsigned)0x80) ? 1 : 0;               // 0x00115234: sltiu $v0, $s0, 0x80
    if (v0 == 0) goto label_0x115250;                           // 0x00115238: beqz $v0, 0x115250
    v0 = 0x1f << 16;                                            // 0x00115240: lui $v0, 0x1f
    v1 = g_001f0338;  // Global at 0x001f0338                   // 0x00115244: lw $v1, 0x338($v0)
    if (v1 != 0) goto label_0x115258;                           // 0x00115248: bnez $v1, 0x115258
    v1 = 0x25 << 16;                                            // 0x0011524c: lui $v1, 0x25
label_0x115250:
    goto label_0x115294;                                        // 0x00115250: b 0x115294
    v0 = -1;                                                    // 0x00115254: addiu $v0, $zero, -1
label_0x115258:
    a1 = 0x25 << 16;                                            // 0x00115258: lui $a1, 0x25
    v1 = v1 + -0x4248;                                          // 0x0011525c: addiu $v1, $v1, -0x4248
    a0 = g_0024bdb0;  // Global at 0x0024bdb0                   // 0x00115260: lw $a0, -0x4250($a1)
    v0 = g_0024bdbc;  // Global at 0x0024bdbc                   // 0x00115264: lw $v0, 4($v1)
    a3 = 1;                                                     // 0x00115268: addiu $a3, $zero, 1
    v0 = v0 & 0x1ff;                                            // 0x0011526c: andi $v0, $v0, 0x1ff
    a2 = v0 << 1;                                               // 0x00115270: sll $a2, $v0, 1
    v0 = v0 + 1;                                                // 0x00115274: addiu $v0, $v0, 1
    a1 = v1 + a2;                                               // 0x00115278: addu $a1, $v1, $a2
    g_0024bdbc = v0;  // Global at 0x0024bdbc                   // 0x0011527c: sw $v0, 4($v1)
    g_00250008 = a3;  // Global at 0x00250008                   // 0x00115280: sb $a3, 8($a1)
    WaitSema();  // 0x114310                                    // 0x00115288: jal 0x114310
    g_0024bdc1 = s0;  // Global at 0x0024bdc1                   // 0x0011528c: sb $s0, 9($v1)
label_0x115294:
    return;                                                     // 0x0011529c: jr $ra
    sp = sp + 0x20;                                             // 0x001152a0: addiu $sp, $sp, 0x20
}