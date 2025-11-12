void func_00158ad0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00158ad0: addiu $sp, $sp, -0x10
    a0 = 0x21 << 16;                                            // 0x00158ad4: lui $a0, 0x21
    a0 = a0 + 0x3ec0;                                           // 0x00158adc: addiu $a0, $a0, 0x3ec0
    goto label_0x158af0;                                        // 0x00158ae4: j 0x158af0
    sp = sp + 0x10;                                             // 0x00158ae8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00158aec: nop 
label_0x158af0:
    g_00213ed0 = 0;  // Global at 0x00213ed0                    // 0x00158af0: sw $zero, 0x10($a0)
    g_00213ec0 = 0;  // Global at 0x00213ec0                    // 0x00158af4: sw $zero, 0($a0)
    g_00213ec4 = 0;  // Global at 0x00213ec4                    // 0x00158af8: sw $zero, 4($a0)
    g_00213ec8 = 0;  // Global at 0x00213ec8                    // 0x00158afc: sw $zero, 8($a0)
    return;                                                     // 0x00158b00: jr $ra
    g_00213ecc = 0;  // Global at 0x00213ecc                    // 0x00158b04: sw $zero, 0xc($a0)
}