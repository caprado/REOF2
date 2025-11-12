void func_001d8e00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x130;                                           // 0x001d8e00: addiu $sp, $sp, -0x130
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d8e0c: addu.qb $zero, $sp, $s1
    func_001d3d20();  // 0x1d3cb0                                // 0x001d8e10: jal 0x1d3cb0
    if (v0 != 0) goto label_0x1d8ea4;                           // 0x001d8e18: bnez $v0, 0x1d8ea4
    at = 0x31 << 16;                                            // 0x001d8e1c: lui $at, 0x31
    a1 = 0x24 << 16;                                            // 0x001d8e20: lui $a1, 0x24
    s0 = g_003137fc;  // Global at 0x003137fc                   // 0x001d8e24: lw $s0, 0x37fc($at)
    v0 = 0x10 << 16;                                            // 0x001d8e28: lui $v0, 0x10
    a0 = sp + 0x30;                                             // 0x001d8e2c: addiu $a0, $sp, 0x30
    a1 = &str_00247810;  // "data\\rom\\scene\\pit_tex\\cockpit.tex" // 0x001d8e30: addiu $a1, $a1, 0x7810
    func_0010ae00();  // 0x10ac68                                // 0x001d8e34: jal 0x10ac68
    s1 = s0 + v0;                                               // 0x001d8e38: addu $s1, $s0, $v0
    a0 = sp + 0x30;                                             // 0x001d8e3c: addiu $a0, $sp, 0x30
    a2 = 1;                                                     // 0x001d8e44: addiu $a2, $zero, 1
    func_001d33e0();  // 0x1d3390                                // 0x001d8e48: jal 0x1d3390
    if (v0 == 0) goto label_0x1d8ea4;                           // 0x001d8e50: beqz $v0, 0x1d8ea4
    /* nop */                                                   // 0x001d8e54: nop 
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001d8e58: lw $v0, 4($s0)
    a1 = s0 + 8;                                                // 0x001d8e5c: addiu $a1, $s0, 8
    goto label_0x1d8e74;                                        // 0x001d8e64: b 0x1d8e74
    v1 = v0 + -1;                                               // 0x001d8e68: addiu $v1, $v0, -1
label_0x1d8e6c:
    a1 = a1 + 8;                                                // 0x001d8e6c: addiu $a1, $a1, 8
    a0 = a0 + 1;                                                // 0x001d8e70: addiu $a0, $a0, 1
label_0x1d8e74:
    v0 = (a0 < v1) ? 1 : 0;                                     // 0x001d8e74: slt $v0, $a0, $v1
    /* nop */                                                   // 0x001d8e78: nop 
    /* nop */                                                   // 0x001d8e7c: nop 
    if (v0 != 0) goto label_0x1d8e6c;                           // 0x001d8e80: bnez $v0, 0x1d8e6c
    /* nop */                                                   // 0x001d8e84: nop 
    v0 = g_00247818;  // Global at 0x00247818                   // 0x001d8e88: lw $v0, 0($a1)
    func_001aeef0();  // 0x1aee20                                // 0x001d8e90: jal 0x1aee20
    a0 = s0 + v0;                                               // 0x001d8e94: addu $a0, $s0, $v0
    func_001d36b0();  // 0x1d3600                                // 0x001d8e9c: jal 0x1d3600
label_0x1d8ea4:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d8ea8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d8eac: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d8eb0: jr $ra
    sp = sp + 0x130;                                            // 0x001d8eb4: addiu $sp, $sp, 0x130
}