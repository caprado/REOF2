void func_0011aa40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0xe0;                                            // 0x0011aa40: addiu $sp, $sp, -0xe0
    a0 = 0x14;                                                  // 0x0011aa74: addiu $a0, $zero, 0x14
    fp = 0x25 << 16;                                            // 0x0011aa7c: lui $fp, 0x25
    s2 = fp + -0x1e40;                                          // 0x0011aa84: addiu $s2, $fp, -0x1e40
    func_00118360();  // 0x118330                                // 0x0011aa88: jal 0x118330
    v1 = 0x1f << 16;                                            // 0x0011aa90: lui $v1, 0x1f
    v0 = g_001f03dc;  // Global at 0x001f03dc                   // 0x0011aa94: lw $v0, 0x3dc($v1)
    /* bnezl $v0, 0x11aaac */                                   // 0x0011aa98: bnezl $v0, 0x11aaac
    v0 = g_0024e1c0;  // Global at 0x0024e1c0                   // 0x0011aa9c: lbu $v0, 0($s0)
    func_00118668();  // 0x118460                                // 0x0011aaa0: jal 0x118460
    /* nop */                                                   // 0x0011aaa4: nop 
    v0 = g_0024e1c0;  // Global at 0x0024e1c0                   // 0x0011aaa8: lbu $v0, 0($s0)
    v1 = v0 << 0x18;                                            // 0x0011aab0: sll $v1, $v0, 0x18
    if (v1 == 0) goto label_0x11aaf4;                           // 0x0011aab4: beqz $v1, 0x11aaf4
    g_0024e1cc = v0;  // Global at 0x0024e1cc                   // 0x0011aab8: sb $v0, 0xc($s2)
    a3 = (s1 < 0x401) ? 1 : 0;                                  // 0x0011aabc: slti $a3, $s1, 0x401
    a1 = a1 + 1;                                                // 0x0011aac0: addiu $a1, $a1, 1
    /* nop */                                                   // 0x0011aac4: nop 
    v0 = (a1 < 0x400) ? 1 : 0;                                  // 0x0011aac8: slti $v0, $a1, 0x400
    if (v0 == 0) goto label_0x11aaf8;                           // 0x0011aacc: beqz $v0, 0x11aaf8
    v0 = s0 + a1;                                               // 0x0011aad0: addu $v0, $s0, $a1
    a0 = s2 + a1;                                               // 0x0011aad4: addu $a0, $s2, $a1
    v1 = g_20000000;  // Global at 0x20000000                   // 0x0011aad8: lbu $v1, 0($v0)
    g_0024f8cc = v1;  // Global at 0x0024f8cc                   // 0x0011aadc: sb $v1, 0xc($a0)
    v1 = v1 << 0x18;                                            // 0x0011aae0: sll $v1, $v1, 0x18
    /* bnezl $v1, 0x11aac8 */                                   // 0x0011aae4: bnezl $v1, 0x11aac8
    a1 = a1 + 1;                                                // 0x0011aae8: addiu $a1, $a1, 1
    goto label_0x11aafc;                                        // 0x0011aaec: b 0x11aafc
    v0 = 0x400;                                                 // 0x0011aaf0: addiu $v0, $zero, 0x400
label_0x11aaf4:
    a3 = (s1 < 0x401) ? 1 : 0;                                  // 0x0011aaf4: slti $a3, $s1, 0x401
label_0x11aaf8:
    v0 = 0x400;                                                 // 0x0011aaf8: addiu $v0, $zero, 0x400
label_0x11aafc:
    if (a1 == v0) goto label_0x11ab04;                          // 0x0011aafc: beql $a1, $v0, 0x11ab04
    g_0024e5cb = 0;  // Global at 0x0024e5cb                    // 0x0011ab00: sb $zero, 0x40b($s2)
label_0x11ab04:
    v0 = *(uint8_t*)(s3);                                       // 0x0011ab04: lbu $v0, 0($s3)
    v1 = v0 << 0x18;                                            // 0x0011ab0c: sll $v1, $v0, 0x18
    if (v1 == 0) goto label_0x11ab44;                           // 0x0011ab10: beqz $v1, 0x11ab44
    g_0024e5cc = v0;  // Global at 0x0024e5cc                   // 0x0011ab14: sb $v0, 0x40c($s2)
    a2 = s2 + 0x40c;                                            // 0x0011ab18: addiu $a2, $s2, 0x40c
    a1 = a1 + 1;                                                // 0x0011ab1c: addiu $a1, $a1, 1
    v0 = (a1 < 0x400) ? 1 : 0;                                  // 0x0011ab20: slti $v0, $a1, 0x400
    if (v0 == 0) goto label_0x11ab44;                           // 0x0011ab24: beqz $v0, 0x11ab44
    v0 = s3 + a1;                                               // 0x0011ab28: addu $v0, $s3, $a1
    a0 = a2 + a1;                                               // 0x0011ab2c: addu $a0, $a2, $a1
    v1 = g_20000000;  // Global at 0x20000000                   // 0x0011ab30: lbu $v1, 0($v0)
    g_0024f8c0 = v1;  // Global at 0x0024f8c0                   // 0x0011ab34: sb $v1, 0($a0)
    v1 = v1 << 0x18;                                            // 0x0011ab38: sll $v1, $v1, 0x18
    /* bnezl $v1, 0x11ab20 */                                   // 0x0011ab3c: bnezl $v1, 0x11ab20
    a1 = a1 + 1;                                                // 0x0011ab40: addiu $a1, $a1, 1
label_0x11ab44:
    v0 = 0x400;                                                 // 0x0011ab44: addiu $v0, $zero, 0x400
    if (a1 == v0) goto label_0x11ab50;                          // 0x0011ab48: beql $a1, $v0, 0x11ab50
    g_0024e9cb = 0;  // Global at 0x0024e9cb                    // 0x0011ab4c: sb $zero, 0x80b($s2)
label_0x11ab50:
    if (a3 != 0) goto label_0x11ab68;                           // 0x0011ab50: bnez $a3, 0x11ab68
    /* nop */                                                   // 0x0011ab54: nop 
    func_00118418();  // 0x118360                                // 0x0011ab58: jal 0x118360
    /* nop */                                                   // 0x0011ab5c: nop 
    goto label_0x11ac7c;                                        // 0x0011ab60: b 0x11ac7c
    v0 = -7;                                                    // 0x0011ab64: addiu $v0, $zero, -7
label_0x11ab68:
    if (s1 <= 0) goto label_0x11aba8;                           // 0x0011ab68: blez $s1, 0x11aba8
    a2 = s2 + 0x80c;                                            // 0x0011ab70: addiu $a2, $s2, 0x80c
    s3 = sp + 0x30;                                             // 0x0011ab74: addiu $s3, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x0011ab78: lui $s5, 0x25
    s4 = 0x25 << 16;                                            // 0x0011ab7c: lui $s4, 0x25
label_0x11ab80:
    v0 = s6 + a1;                                               // 0x0011ab80: addu $v0, $s6, $a1
    a0 = a2 + a1;                                               // 0x0011ab84: addu $a0, $a2, $a1
    v1 = g_20000000;  // Global at 0x20000000                   // 0x0011ab88: lbu $v1, 0($v0)
    a1 = a1 + 1;                                                // 0x0011ab8c: addiu $a1, $a1, 1
    v0 = (a1 < s1) ? 1 : 0;                                     // 0x0011ab90: slt $v0, $a1, $s1
    g_0024f8c0 = v1;  // Global at 0x0024f8c0                   // 0x0011ab94: sb $v1, 0($a0)
    if (v0 != 0) goto label_0x11ab80;                           // 0x0011ab98: bnez $v0, 0x11ab80
    /* nop */                                                   // 0x0011ab9c: nop 
    goto label_0x11abb8;                                        // 0x0011aba0: b 0x11abb8
    g_0024edd0 = s1;  // Global at 0x0024edd0                   // 0x0011aba4: sw $s1, 0xc10($s2)
label_0x11aba8:
    s3 = sp + 0x30;                                             // 0x0011aba8: addiu $s3, $sp, 0x30
    s5 = 0x25 << 16;                                            // 0x0011abac: lui $s5, 0x25
    s4 = 0x25 << 16;                                            // 0x0011abb0: lui $s4, 0x25
    g_0024edd0 = s1;  // Global at 0x0024edd0                   // 0x0011abb4: sw $s1, 0xc10($s2)
label_0x11abb8:
    v0 = 1;                                                     // 0x0011abb8: addiu $v0, $zero, 1
    g_0024edcc = s7;  // Global at 0x0024edcc                   // 0x0011abbc: sw $s7, 0xc0c($s2)
    a0 = sp + 0x10;                                             // 0x0011abc0: addiu $a0, $sp, 0x10
    local_14 = v0;                                              // 0x0011abc4: sw $v0, 0x14($sp)
    s0 = fp + -0x1e40;                                          // 0x0011abc8: addiu $s0, $fp, -0x1e40
    local_18 = 0;                                               // 0x0011abcc: sw $zero, 0x18($sp)
    s4 = s4 + -0x1200;                                          // 0x0011abd0: addiu $s4, $s4, -0x1200
    DeleteSema();  // 0x1142e0                                  // 0x0011abd4: jal 0x1142e0
    local_24 = 0;                                               // 0x0011abd8: sw $zero, 0x24($sp)
    v0 = 4;                                                     // 0x0011abe4: addiu $v0, $zero, 4
    g_0024e1c4 = s3;  // Global at 0x0024e1c4                   // 0x0011abe8: sw $s3, 4($s2)
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x0011abec: sw $v0, 8($s2)
    a1 = 0xc14;                                                 // 0x0011abf0: addiu $a1, $zero, 0xc14
    func_00116d40();  // 0x116c90                                // 0x0011abf4: jal 0x116c90
    g_0024e1c0 = s1;  // Global at 0x0024e1c0                   // 0x0011abf8: sw $s1, 0($s2)
    a0 = s5 + -0x740;                                           // 0x0011abfc: addiu $a0, $s5, -0x740
    local_0 = 0;                                                // 0x0011ac04: sw $zero, 0($sp)
    a1 = 0x14;                                                  // 0x0011ac08: addiu $a1, $zero, 0x14
    t0 = 0xc14;                                                 // 0x0011ac10: addiu $t0, $zero, 0xc14
    t2 = 4;                                                     // 0x0011ac18: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x0011ac1c: jal 0x1176a8
    if (v0 >= 0) goto label_0x11ac44;                           // 0x0011ac24: bgez $v0, 0x11ac44
    v0 = 0x2000 << 16;                                          // 0x0011ac28: lui $v0, 0x2000
    SignalSema();  // 0x1142f0                                  // 0x0011ac2c: jal 0x1142f0
    func_00118418();  // 0x118360                                // 0x0011ac34: jal 0x118360
    /* nop */                                                   // 0x0011ac38: nop 
    goto label_0x11ac7c;                                        // 0x0011ac3c: b 0x11ac7c
    v0 = -0xb;                                                  // 0x0011ac40: addiu $v0, $zero, -0xb
label_0x11ac44:
    v0 = s4 | v0;                                               // 0x0011ac44: or $v0, $s4, $v0
    func_00118418();  // 0x118360                                // 0x0011ac48: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x0011ac4c: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x11ac68;                           // 0x0011ac50: bnez $s0, 0x11ac68
    /* nop */                                                   // 0x0011ac54: nop 
    SignalSema();  // 0x1142f0                                  // 0x0011ac58: jal 0x1142f0
    goto label_0x11ac7c;                                        // 0x0011ac60: b 0x11ac7c
    v0 = -0xb;                                                  // 0x0011ac64: addiu $v0, $zero, -0xb
label_0x11ac68:
    PollSema();  // 0x114320                                    // 0x0011ac68: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x0011ac70: jal 0x1142f0
    v0 = local_30;                                              // 0x0011ac78: lw $v0, 0x30($sp)
label_0x11ac7c:
    return;                                                     // 0x0011aca4: jr $ra
    sp = sp + 0xe0;                                             // 0x0011aca8: addiu $sp, $sp, 0xe0
}