void func_001751c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001751c0: addiu $sp, $sp, -0x20
    v0 = 6;                                                     // 0x001751c4: addiu $v0, $zero, 6
    if (s0 != v0) goto label_0x175204;                          // 0x001751e0: bne $s0, $v0, 0x175204
    v0 = 1;                                                     // 0x001751e8: addiu $v0, $zero, 1
    if (s1 != v0) goto label_0x175208;                          // 0x001751ec: bnel $s1, $v0, 0x175208
    v0 = 5;                                                     // 0x001751f0: addiu $v0, $zero, 5
    func_00177950();  // 177950                                // 0x001751f4: jal 0x177950
    a1 = 3;                                                     // 0x001751f8: addiu $a1, $zero, 3
    /* beqzl $v0, 0x175234 */                                   // 0x001751fc: beqzl $v0, 0x175234
label_0x175204:
    v0 = 5;                                                     // 0x00175204: addiu $v0, $zero, 5
label_0x175208:
    if (s0 != v0) goto label_0x175230;                          // 0x00175208: bne $s0, $v0, 0x175230
    v0 = 1;                                                     // 0x0017520c: addiu $v0, $zero, 1
    if (s1 != v0) goto label_0x175234;                          // 0x00175210: bnel $s1, $v0, 0x175234
    func_00177950();  // 177950                                // 0x0017521c: jal 0x177950
    a1 = 2;                                                     // 0x00175220: addiu $a1, $zero, 2
    if (v0 == 0) goto label_0x175234;                           // 0x00175224: beqz $v0, 0x175234
    v0 = 1;                                                     // 0x0017522c: addiu $v0, $zero, 1
label_0x175230:
label_0x175234:
    return;                                                     // 0x00175240: jr $ra
    sp = sp + 0x20;                                             // 0x00175244: addiu $sp, $sp, 0x20
}