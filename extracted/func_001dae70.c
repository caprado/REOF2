void func_001dae70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001dae70: addiu $sp, $sp, -0x30
    at = 0x31 << 16;                                            // 0x001dae74: lui $at, 0x31
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001dae7c: addu.qb $zero, $sp, $s1
    s0 = g_003137fc;  // Global at 0x003137fc                   // 0x001dae88: lw $s0, 0x37fc($at)
    func_001ac8d0();  // 1ac8d0                                // 0x001dae8c: jal 0x1ac8d0
    a0 = 0xc;                                                   // 0x001dae90: addiu $a0, $zero, 0xc
    func_001b7b30();  // 1b7b30                                // 0x001dae94: jal 0x1b7b30
    /* nop */                                                   // 0x001dae98: nop 
label_0x1dae9c:
    func_001b7b40();  // 1b7b40                                // 0x001dae9c: jal 0x1b7b40
    v1 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x001daea4: sltu $v1, $zero, $v0
    v1 = v1 ^ 1;                                                // 0x001daea8: xori $v1, $v1, 1
    /* nop */                                                   // 0x001daeac: nop 
    if (v1 != 0) goto label_0x1dae9c;                           // 0x001daeb0: bnez $v1, 0x1dae9c
    /* nop */                                                   // 0x001daeb4: nop 
    if (v0 < 0) goto label_0x1daed4;                            // 0x001daeb8: bltz $v0, 0x1daed4
    at = 0x31 << 16;                                            // 0x001daebc: lui $at, 0x31
    v0 = g_003137fc;  // Global at 0x003137fc                   // 0x001daec4: lw $v0, 0x37fc($at)
    a2 = 0xc;                                                   // 0x001daec8: addiu $a2, $zero, 0xc
    func_001acb70();  // 1acb70                                // 0x001daecc: jal 0x1acb70
    a1 = v0 + 0x4000;                                           // 0x001daed0: addiu $a1, $v0, 0x4000
label_0x1daed4:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001daed8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001daedc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001daee0: jr $ra
    sp = sp + 0x30;                                             // 0x001daee4: addiu $sp, $sp, 0x30
}