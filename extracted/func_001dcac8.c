void func_001dcac8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001dcac8: addiu $sp, $sp, -0x20
    v0 = 0x33 << 16;                                            // 0x001dcacc: lui $v0, 0x33
    s0 = v0 + -0x140;                                           // 0x001dcad8: addiu $s0, $v0, -0x140
    v1 = g_0032ff50;  // Global at 0x0032ff50                   // 0x001dcadc: lw $v1, 0x90($s0)
    v0 = v1 + -1;                                               // 0x001dcae0: addiu $v0, $v1, -1
    v0 = ((unsigned)v0 < (unsigned)5) ? 1 : 0;                  // 0x001dcae4: sltiu $v0, $v0, 5
    if (v0 == 0) goto label_0x1dcb10;                           // 0x001dcae8: beqz $v0, 0x1dcb10
    v0 = 0x22 << 16;                                            // 0x001dcaf0: lui $v0, 0x22
    v1 = v1 << 2;                                               // 0x001dcaf4: sll $v1, $v1, 2
    v0 = v0 + -0x320;                                           // 0x001dcaf8: addiu $v0, $v0, -0x320
    v1 = v1 + v0;                                               // 0x001dcafc: addu $v1, $v1, $v0
    v0 = *(int32_t*)(v1);                                       // 0x001dcb00: lw $v0, 0($v1)
    /* call function at address in v0 */                        // 0x001dcb04: jalr $v0
    /* nop */                                                   // 0x001dcb08: nop 
label_0x1dcb10:
    g_0032ff58 = 0;  // Global at 0x0032ff58                    // 0x001dcb10: sw $zero, 0x98($s0)
    g_0032ff50 = 0;  // Global at 0x0032ff50                    // 0x001dcb18: sw $zero, 0x90($s0)
    return;                                                     // 0x001dcb24: jr $ra
    sp = sp + 0x20;                                             // 0x001dcb28: addiu $sp, $sp, 0x20
}