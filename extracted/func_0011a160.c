void func_0011a160() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_14, local_18, local_24, local_30;
    
    sp = sp + -0x90;                                            // 0x0011a160: addiu $sp, $sp, -0x90
    s3 = 0x25 << 16;                                            // 0x0011a174: lui $s3, 0x25
    func_00117f28();  // 0x117eb8                                // 0x0011a180: jal 0x117eb8
    s2 = s3 + -0x1e40;                                          // 0x0011a184: addiu $s2, $s3, -0x1e40
    func_00118360();  // 0x118330                                // 0x0011a18c: jal 0x118330
    a0 = 0xb;                                                   // 0x0011a190: addiu $a0, $zero, 0xb
    v0 = 0x1f << 16;                                            // 0x0011a194: lui $v0, 0x1f
    v1 = g_001f03dc;  // Global at 0x001f03dc                   // 0x0011a198: lw $v1, 0x3dc($v0)
    if (v1 != 0) goto label_0x11a1b4;                           // 0x0011a19c: bnez $v1, 0x11a1b4
    /* nop */                                                   // 0x0011a1a0: nop 
    func_00118418();  // 0x118360                                // 0x0011a1a4: jal 0x118360
    /* nop */                                                   // 0x0011a1a8: nop 
    goto label_0x11a29c;                                        // 0x0011a1ac: b 0x11a29c
    v0 = -1;                                                    // 0x0011a1b0: addiu $v0, $zero, -1
label_0x11a1b4:
    if (s0 == 0) goto label_0x11a1c8;                           // 0x0011a1b4: beqz $s0, 0x11a1c8
    /* nop */                                                   // 0x0011a1b8: nop 
    v0 = g_0024ee04;  // Global at 0x0024ee04                   // 0x0011a1bc: lw $v0, 4($s0)
    /* bnezl $v0, 0x11a1d8 */                                   // 0x0011a1c0: bnezl $v0, 0x11a1d8
    v0 = g_0024ee00;  // Global at 0x0024ee00                   // 0x0011a1c4: lw $v0, 0($s0)
label_0x11a1c8:
    func_00118418();  // 0x118360                                // 0x0011a1c8: jal 0x118360
    /* nop */                                                   // 0x0011a1cc: nop 
    goto label_0x11a29c;                                        // 0x0011a1d0: b 0x11a29c
    v0 = -9;                                                    // 0x0011a1d4: addiu $v0, $zero, -9
    v1 = 1;                                                     // 0x0011a1d8: addiu $v1, $zero, 1
    g_0024e1d0 = s1;  // Global at 0x0024e1d0                   // 0x0011a1dc: sw $s1, 0x10($s2)
    a0 = sp + 0x10;                                             // 0x0011a1e0: addiu $a0, $sp, 0x10
    g_0024e1cc = v0;  // Global at 0x0024e1cc                   // 0x0011a1e4: sw $v0, 0xc($s2)
    local_14 = v1;                                              // 0x0011a1e8: sw $v1, 0x14($sp)
    local_18 = 0;                                               // 0x0011a1ec: sw $zero, 0x18($sp)
    DeleteSema();  // 0x1142e0                                  // 0x0011a1f0: jal 0x1142e0
    local_24 = 0;                                               // 0x0011a1f4: sw $zero, 0x24($sp)
    v1 = sp + 0x30;                                             // 0x0011a1fc: addiu $v1, $sp, 0x30
    v0 = 0x25 << 16;                                            // 0x0011a200: lui $v0, 0x25
    g_0024e1c0 = s1;  // Global at 0x0024e1c0                   // 0x0011a204: sw $s1, -0x1e40($s3)
    s0 = v0 + -0x1200;                                          // 0x0011a208: addiu $s0, $v0, -0x1200
    a0 = 0x25 << 16;                                            // 0x0011a20c: lui $a0, 0x25
    v0 = 4;                                                     // 0x0011a210: addiu $v0, $zero, 4
    g_0024e1c4 = v1;  // Global at 0x0024e1c4                   // 0x0011a214: sw $v1, 4($s2)
    g_0024e1c8 = v0;  // Global at 0x0024e1c8                   // 0x0011a218: sw $v0, 8($s2)
    a0 = a0 + -0x740;                                           // 0x0011a21c: addiu $a0, $a0, -0x740
    a1 = 0xb;                                                   // 0x0011a224: addiu $a1, $zero, 0xb
    local_0 = 0;                                                // 0x0011a228: sw $zero, 0($sp)
    t0 = 0x20;                                                  // 0x0011a230: addiu $t0, $zero, 0x20
    t2 = 4;                                                     // 0x0011a238: addiu $t2, $zero, 4
    func_001178a0();  // 0x1176a8                                // 0x0011a23c: jal 0x1176a8
    if (v0 >= 0) goto label_0x11a264;                           // 0x0011a244: bgez $v0, 0x11a264
    v0 = 0x2000 << 16;                                          // 0x0011a248: lui $v0, 0x2000
    PollSema();  // 0x114320                                    // 0x0011a24c: jal 0x114320
    func_00118418();  // 0x118360                                // 0x0011a254: jal 0x118360
    /* nop */                                                   // 0x0011a258: nop 
    goto label_0x11a29c;                                        // 0x0011a25c: b 0x11a29c
    v0 = -0xb;                                                  // 0x0011a260: addiu $v0, $zero, -0xb
label_0x11a264:
    v0 = s0 | v0;                                               // 0x0011a264: or $v0, $s0, $v0
    func_00118418();  // 0x118360                                // 0x0011a268: jal 0x118360
    s0 = g_20000000;  // Global at 0x20000000                   // 0x0011a26c: lw $s0, 0($v0)
    if (s0 != 0) goto label_0x11a288;                           // 0x0011a270: bnez $s0, 0x11a288
    /* nop */                                                   // 0x0011a274: nop 
    SignalSema();  // 0x1142f0                                  // 0x0011a278: jal 0x1142f0
    goto label_0x11a29c;                                        // 0x0011a280: b 0x11a29c
    v0 = -0xb;                                                  // 0x0011a284: addiu $v0, $zero, -0xb
label_0x11a288:
    PollSema();  // 0x114320                                    // 0x0011a288: jal 0x114320
    SignalSema();  // 0x1142f0                                  // 0x0011a290: jal 0x1142f0
    v0 = local_30;                                              // 0x0011a298: lw $v0, 0x30($sp)
label_0x11a29c:
    return;                                                     // 0x0011a2b0: jr $ra
    sp = sp + 0x90;                                             // 0x0011a2b4: addiu $sp, $sp, 0x90
}