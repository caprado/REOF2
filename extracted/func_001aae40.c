void func_001aae40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x130;                                           // 0x001aae40: addiu $sp, $sp, -0x130
    a1 = 0x24 << 16;                                            // 0x001aae4c: lui $a1, 0x24
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001aae50: addu.qb $zero, $sp, $s1
    a1 = &str_0023da50;  // "spucore=1"                         // 0x001aae54: addiu $a1, $a1, -0x25b0
    func_0010a4d8();  // 10a4d8                                // 0x001aae60: jal 0x10a4d8
    a0 = sp + 0x30;                                             // 0x001aae64: addiu $a0, $sp, 0x30
    func_001aaca0();  // 1aaca0                                // 0x001aae68: jal 0x1aaca0
    a0 = sp + 0x30;                                             // 0x001aae6c: addiu $a0, $sp, 0x30
    if (v0 >= 0) goto label_0x1aae80;                           // 0x001aae70: bgez $v0, 0x1aae80
    at = 0x31 << 16;                                            // 0x001aae74: lui $at, 0x31
    goto label_0x1aaec4;                                        // 0x001aae78: b 0x1aaec4
label_0x1aae80:
    v1 = g_00313858;  // Global at 0x00313858                   // 0x001aae84: lw $v1, 0x3858($at)
    v0 = 0x10c0;                                                // 0x001aae88: addiu $v0, $zero, 0x10c0
    /* multiply: v0 * s1 -> hi:lo */                            // 0x001aae8c: mult $ac2, $v0, $s1
    s0 = s1 + 5;                                                // 0x001aae90: addiu $s0, $s1, 5
    a1 = 3;                                                     // 0x001aae98: addiu $a1, $zero, 3
    func_001283f8();  // 1283f8                                // 0x001aae9c: jal 0x1283f8
    a3 = v1 + v0;                                               // 0x001aaea0: addu $a3, $v1, $v0
label_0x1aaea4:
    func_001287d8();  // 1287d8                                // 0x001aaea4: jal 0x1287d8
    v1 = 3;                                                     // 0x001aaeac: addiu $v1, $zero, 3
    /* nop */                                                   // 0x001aaeb0: nop 
    /* nop */                                                   // 0x001aaeb4: nop 
    if (v0 != v1) goto label_0x1aaea4;                          // 0x001aaeb8: bne $v0, $v1, 0x1aaea4
    /* nop */                                                   // 0x001aaebc: nop 
    v0 = 1;                                                     // 0x001aaec0: addiu $v0, $zero, 1
label_0x1aaec4:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001aaec8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001aaecc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001aaed0: jr $ra
    sp = sp + 0x130;                                            // 0x001aaed4: addiu $sp, $sp, 0x130
}