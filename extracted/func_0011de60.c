/** @category ps2-kernel-not-needed @status complete @author caprado */
void func_0011de60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0011de60: addiu $sp, $sp, -0x20
    func_0011d320();  // 11d320                                // 0x0011de6c: jal 0x11d320
    /* nop */                                                   // 0x0011de70: nop 
    v0 = 0x1000 << 16;                                          // 0x0011de78: lui $v0, 0x1000
    v0 = v0 | 0x1010;                                           // 0x0011de7c: ori $v0, $v0, 0x1010
    v0 = g_10000000;  // Global at 0x10000000                   // 0x0011de80: lw $v0, 0($v0)
    v1 = v0 & 0x80;                                             // 0x0011de84: andi $v1, $v0, 0x80
    if (v1 == 0) goto label_0x11dea8;                           // 0x0011de88: beqz $v1, 0x11dea8
    /* nop */                                                   // 0x0011de8c: nop 
    if (s0 == 0) goto label_0x11dee0;                           // 0x0011de90: beqz $s0, 0x11dee0
    v0 = 1;                                                     // 0x0011de94: addiu $v0, $zero, 1
    func_0011d378();  // 11d378                                // 0x0011de98: jal 0x11d378
    /* nop */                                                   // 0x0011de9c: nop 
    goto label_0x11dee0;                                        // 0x0011dea0: b 0x11dee0
    v0 = 1;                                                     // 0x0011dea4: addiu $v0, $zero, 1
label_0x11dea8:
    a0 = 0xffff << 16;                                          // 0x0011dea8: lui $a0, 0xffff
    a0 = a0 | 0xf3ff;                                           // 0x0011deac: ori $a0, $a0, 0xf3ff
    a0 = v0 & a0;                                               // 0x0011deb0: and $a0, $v0, $a0
    func_0011dc00();  // 11dc00                                // 0x0011deb4: jal 0x11dc00
    a0 = a0 | 0x80;                                             // 0x0011deb8: ori $a0, $a0, 0x80
    func_0011e460();  // 11e460                                // 0x0011debc: jal 0x11e460
    /* nop */                                                   // 0x0011dec0: nop 
    func_0011df70();  // 11df70                                // 0x0011dec4: jal 0x11df70
    if (s0 == 0) goto label_0x11dee0;                           // 0x0011decc: beqz $s0, 0x11dee0
    func_0011d378();  // 11d378                                // 0x0011ded4: jal 0x11d378
    /* nop */                                                   // 0x0011ded8: nop 
label_0x11dee0:
    return;                                                     // 0x0011dee8: jr $ra
    sp = sp + 0x20;                                             // 0x0011deec: addiu $sp, $sp, 0x20
}